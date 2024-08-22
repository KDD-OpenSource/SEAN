train_model_save_weights.py trains a sean model (sean_saving.py) and saves the weights to the file weights.npz

These can then be converted by construct_ad.py into ad.cpp which contains the function that can be used for anomaly detection (see ad.h for the function signature).

For direct testing, data_to_csv.py converts a .npz file to .csv which can be read by main.cpp. main.cpp is a simple test program that reads the .csv file and uses the anomaly detection function from ad.cpp to calcalculate and average the anomaly score.

Both can be compiled using compile.sh. For simplicity we include an example version of an anomaly detection program on Acensus.npz
