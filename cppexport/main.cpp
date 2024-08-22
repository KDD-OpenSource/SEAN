#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "ad.h"  // Include the header file for anomalies function

int main() {
    std::ifstream file("Acensus.csv");
    std::string line;

    float sum_anomalies = 0.0f;
    int count = 0;
    while (std::getline(file, line)) {
        std::vector<float> row;
        std::stringstream ss(line);
        std::string value;

        while (std::getline(ss, value, ',')) {
            row.push_back(std::stof(value));
        }

        sum_anomalies += anomalies(row);
        count++;
    }

    float average_anomalies = sum_anomalies / count;

    std::cout << "Average anomalies score: " << average_anomalies << std::endl;

    return 0;
}

