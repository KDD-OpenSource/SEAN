from ucimlrepo import fetch_ucirepo 
import numpy as np

from pyod.models.iforest import IForest
from sklearn.metrics import roc_auc_score

from sean_saving import sean

from tqdm import tqdm


#load data using UCI

steel_plates_faults = fetch_ucirepo(id=198) 
  
x = steel_plates_faults.data.features 
y = steel_plates_faults.data.targets 

y = np.argmax(y,axis=1)#generate labels
y=[0 if i in [4] else 1 for i in y]#label 4 is considered normal, rest abnormal
y = np.array(y)
x= np.array(x)

#datasplit
x0=x[y==0]
x1=x[y==1]

trainf=0.7#70% of normal samples are used for training, rest for evaluation
n0=x0.shape[0]
trainc= int(n0*trainf)
x= x0[:trainc]
x0_test= x0[trainc:]
x1_test= x1
tx=np.concatenate([x0_test,x1_test],axis=0)
ty= np.concatenate([np.zeros(x0_test.shape[0]),np.ones(x1_test.shape[0])],axis=0)



#train models and extract their prediction and features used. For simplicy here we simply implement this as a list of SEAN ensemble with 1 submodel each
modelcount=1000

ps,feats=[],[]

for _ in tqdm(range(modelcount)):
    clf=sean(normalize=True, submodels=1, subsample=0.1, subsample_min=1000, subsample_max=1000, featurebag=0.1, feature_min=2, feature_max=100, mixed_features=False, baggingstyle="classical")

    p=clf.fit_predict(x,tx)
    ps.append(p)
    mat=clf.mats[-1]
    feat=np.argmax(mat, axis=0)
    feats.append(feat)

#find the set of models that use a certain feature, aggregate their predictions
dic={}

for p,feat in zip(ps,feats):
    for f in feat:
        if f not in dic:
            dic[f]=[]
        dic[f].append(p)

for k in dic:
    dic[k]=np.array(dic[k])
    dic[k]=np.max(dic[k],axis=0)

p=np.mean(list(dic.values()),axis=0)


#choose one sample to analyse. We choose here the most anomalous one we encountered
care=np.argmax(p)

p=p[care]
dic={k:v[care] for k,v in dic.items()}

#extract labels for plotting
names=steel_plates_faults.variables["name"]
roles=steel_plates_faults.variables["role"]
labels=[name for name, role in zip(names,roles) if role=="Feature"]
dic={labels[i]:value for i,value in dic.items()}


#save the results for plotting
import json

with open("importances.json","w") as f:
    json.dump({"mean":p,"features":dic},f, indent=2)





