import numpy as np

f=np.load("weights.npz")
mn,mx,mats,coefs=f["mn"],f["mx"],f["mats"],f["coefs"]

starter="""#include "ad.h"
"""

def work_str(mat):
    #mat is of size inputs x outputs
    ret=""
    for line in mat.T:
        curr=[]
        for i,value in enumerate(line):
            if value==0:
                continue
            if value==1:
                curr.append(f"sample[{i}]")
            curr.append(f"{value:.6f}*sample[{i}]")
        curr=" + ".join(curr)
        ret+=f"    work.push_back({curr});\n"
    return ret

def coef_str(coef):
    ret=""
    for i in range(len(coef)):
        ret+=f"    score+={coef[i]:.6f}*work[{i}];\n"
    return ret

def construct_one(i,mat,coef):

    ret="""
float anomalies##(const std::vector<float>& sample) {    
    std::vector<float> work;

%%

    float score=0.0f;
~~
    return score;
}""".replace("##",str(i)).replace("~~",coef_str(coef)).replace("%%",work_str(mat))

    return ret


def one_str(mat,coef):
    features=[]
    for line in mat.T:
        curr=[]
        for i,value in enumerate(line):
            if value==0:
                continue
            features.append(i)
            break
    #ret=""
    parts=[]
    for i in range(len(coef)):
        #ret+=f"    score+={coef[i]:.6f}*work[{features[i]}];\n"
        parts.append(f"{coef[i]:.6f}*sample[{features[i]}]")
    return " + ".join(parts)


#better version
def construct_one(i,mat,coef):

    ret="""
float anomalies##(const std::vector<float>& sample) {    

    float score=~~;

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}""".replace("##",str(i)).replace("~~",one_str(mat,coef))

    return ret

def construct_main():
    main="""
float anomalies(const std::vector<float>& sample) {
    //handles normalization and constructs an ensemble from the individual models
    std::vector<float> work;

"""
    for i,(a,b) in enumerate(zip(mn,mx)):
        d=b-a
        if np.abs(d)<1e-6:
            d=1e-6
        main+="    work.push_back((sample[{}]-{})/{});\n".format(i,a,d)
    
    main+="\n    float score=0.0f;\n"
    for i in range(len(mats)):
        main+=f"    score=std::max(score, anomalies{i}(work));\n"
    main+="\n    return score;\n}\n"

    return main

with open("ad.cpp","w") as f:
    f.write(starter)
    for i,(mat,coef) in enumerate(zip(mats,coefs)):
        f.write(construct_one(i,mat,coef))
        f.write("\n")
    f.write(construct_main())



