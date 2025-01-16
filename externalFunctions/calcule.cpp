#include "calcule.h"
#include <iostream>
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