Contains an implementation for SEAN from our Paper "Towards Highly Efficient Anomaly Detection for Predictive Maintenance".

"sean.py" allows training a SEAN model, an example of this on the cardio.npz dataset is shown in main.py.

The folder "cppexport" contains an example of how to convert a SEAN model into a C++ function.

The folder "explainability" contains an example of how to calculate and visualize shapley anomaly scores explaining which features contribute most towards making a sample anomalous.

