import numpy as np
import os
os.environ['CUDA_VISIBLE_DEVICES'] = ''

from sean import sean

from sklearn.metrics import roc_auc_score
from sklearn.metrics import precision_recall_curve, auc

import json
from time import time

def auc_pr_score(ty,pred):
    precision, recall, _ = precision_recall_curve(ty, pred)
    return auc(recall, precision)


np.random.seed(123)

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
               baggingstyle="mat",
               )
    y=clf.fit_predict(x,tx)
    auc=roc_auc_score(ty,y)
    auc2=auc_pr_score(ty,y)
    t1=time()
    return auc,auc2,t1-t0

if __name__ == '__main__':
    dataset="cardio"
    auc,auc2,tim=subtask(f"{dataset}.npz")
    print(f"Dataset: {dataset}")
    print(f"AUC-ROC: {auc:.4f}")
    print(f"AUC-PR: {auc2:.4f}")
    print(f"Runtime: {tim:.4f}s")

