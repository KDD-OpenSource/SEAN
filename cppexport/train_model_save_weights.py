import numpy as np
import os
os.environ['CUDA_VISIBLE_DEVICES'] = ''

from sean_saving import sean

from sklearn.metrics import roc_auc_score
from sklearn.metrics import precision_recall_curve, auc


import json
from time import time

def auc_pr_score(ty,pred):
    precision, recall, _ = precision_recall_curve(ty, pred)
    return auc(recall, precision)


def subtask(fn):
    f=np.load(fn)
    x,tx,ty=f['x'],f['tx'],f['ty']

    t0=time()
    clf = sean(normalize=True,
               submodels=50,
               subsample=0.1,
               subsample_min=1000,
               subsample_max=1000,
               featurebag=0.1,
               feature_min=2,
               feature_max=100,
               mixed_features=False,
               baggingstyle="classical",
               )
    y=clf.fit_predict(x,tx)
    data={"mn":clf.mn,"mx":clf.mx,"mats":clf.mats,"coefs":clf.coefs}
    np.savez_compressed(f"weights.npz",**data)
    auc=roc_auc_score(ty,y)
    auc2=0
    t1=time()
    return auc,auc2,t1-t0


if __name__=="__main__":
    subtask("Acensus.npz")
