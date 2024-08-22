import numpy as np

npz_file = np.load('Acensus.npz')

tx_array = npz_file['tx']

np.savetxt('Acensus.csv', tx_array, delimiter=',', fmt='%.6f')

