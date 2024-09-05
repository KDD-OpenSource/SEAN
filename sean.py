import numpy as np
from sklearn.metrics import roc_auc_score
from pyod.models.iforest import IForest as ifor
import time


#slightly modified version of sean storing all weights
class sean():
    def __init__(self, normalize=True,submodels=100,subsample=0.2,subsample_min=100,subsample_max=1000,featurebag=0.5,feature_min=5,feature_max=100, mixed_features=False, baggingstyle="gauss"):
        self.normalize=normalize
        self.submodels=submodels
        self.subsample=subsample
        self.subsample_min=subsample_min
        self.subsample_max=subsample_max
        self.featurebag=featurebag
        self.feature_min=feature_min
        self.feature_max=feature_max
        self.mixed_features=mixed_features
        self.baggingstyle=baggingstyle


        self.mn,self.mx=None,None
        self.mats=[]
        self.coefs=[]

    def fit_predict(self,x,tx):
        #normalization
        if self.normalize:
            epsilon=1e-10
            mn,mx=np.min(x,axis=0),np.max(x,axis=0)
            self.mn,self.mx=mn,mx
            x=(x-mn)/(epsilon+mx-mn)
            tx=(tx-mn)/(epsilon+mx-mn)

        #select fb/ss constants
        features=x.shape[1]
        samples=x.shape[0]

        fb=int(features*self.featurebag)
        if fb<self.feature_min:
            fb=self.feature_min
        if fb>self.feature_max:
            fb=self.feature_max
        if fb>features:
            fb=features
        do_fb=features!=fb

        ss=int(samples*self.subsample)
        if ss<self.subsample_min:
            ss=self.subsample_min
        if ss>self.subsample_max:
            ss=self.subsample_max
        if ss>samples:
            ss=samples
        do_ss=samples!=ss


        #main loop training submodel
        preds=[]
        for iteration in range(self.submodels):
            x_=x
            tx_=tx
            if do_ss:
                idx=np.random.choice(samples,ss,replace=False)
                x_=x_[idx]
            if do_fb:
                if self.baggingstyle=="gauss":
                    mat=np.random.normal(0,1,(features,fb))
                    mat-=np.mean(mat,axis=0)
                elif self.baggingstyle=="gaussnonorm":
                    mat=np.random.normal(0,1,(features,fb))
                elif self.baggingstyle=="mixture":
                    mat=np.random.binomial(1, 0.5, 10).astype(bool)
                elif self.baggingstyle=="reverse_classical":
                    mat=np.zeros((features,fb))
                    for i in range(features):
                        mat[i,np.random.choice(fb)]=1
                elif self.baggingstyle=="classical":
                    mat=np.zeros((features,fb))
                    for i in range(fb):
                        mat[np.random.choice(features),i]=1
                else:
                    raise Exception("unknown baggingstyle")
                self.mats.append(mat)
                x_=np.matmul(x_,mat)
                tx_=np.matmul(tx_,mat)

            if self.mixed_features:
                uss=np.arange(2*(len(feats)//2))
                np.random.shuffle(uss)
                a=uss[:len(feats)//2]
                b=uss[len(feats)//2:]
                x_=np.concatenate([x_,x_[:,a]*x_[:,b]],axis=1)
                tx_=np.concatenate([tx_,tx_[:,a]*tx_[:,b]],axis=1)


            y=np.ones(len(x_))
            coefficients, residuals, rank, s = np.linalg.lstsq(x_, y, rcond=None)
            self.coefs.append(coefficients)
            pred=np.dot(tx_,coefficients)
            preds.append(np.abs(pred-1))
        preds=np.array(preds)
        ret= np.max(preds,axis=0)


        return ret

            

