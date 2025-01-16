#include "calcule.h"
#include <iostream>
#include <fstream>
#include<algorithm>
#include<math.h>


double Average(const double data[], size_t size) {
    if (size == 0) {
        std::cerr << "Error: Input array is empty." << std::endl;
        return 0.0;
    }

    double sum = 0.0;
    for (size_t i = 0; i < size; ++i) {
        sum += data[i];
    }

    return sum / static_cast<double>(size);
}


double Variance(double avr, const double data[], size_t size) {
    if (size == 0) {
        std::cerr << "Error: Input array is empty." << std::endl;
        return 0.0;
    }

    double sumV = 0.0;
    for (size_t i = 0; i < size; ++i) {
        sumV += (data[i] - avr) * (data[i] - avr); 
    }


    return sumV / static_cast<double>(size);
}


double Median(double data[], size_t size) {
    if (size == 0) {
        std::cerr << "Error: Input array is empty." << std::endl;
        return 0.0; 
    }
    std::sort(data, data + size);
    if (size % 2 == 1) {
        return data[size / 2];
    } else {
        return (data[(size / 2) - 1] + data[size / 2]) / 2.0;
    }
}

double StandardDeviation(double variance) {
    return std::sqrt(variance);
}




/// to bring data




double* ExportData(const std::string& filename, size_t& size) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        size = 0;
        return nullptr; 
    }


    size = 0;
    std::string line;
    while (std::getline(file, line)) {
        size++;
    }

    double* data = new double[size];

    file.clear();
    file.seekg(0, std::ios::beg);


    size_t index = 0;
    while (std::getline(file, line)) {
        try {
            data[index] = std::stod(line); // Convert string to double
            index++;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error converting string to double: " << line << std::endl;
        }
    }

    file.close();
    return data;
}