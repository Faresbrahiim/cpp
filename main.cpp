#include <iostream>
#include "externalFunctions/calcule.h" 

int main() {
    double data[] = {10.5, 20.3, 30.7, 40.2, 50.1};
    size_t size = sizeof(data) / sizeof(data[0]);


    double average = Average(data, size);
    double median = Median(data, size);
    double variance = Variance(average, data, size);
    double stdDev = StandardDeviation(variance);
  

    std::cout << "Average: " << average << std::endl;
    std::cout << "Median: " << median << std::endl;
    std::cout << "Variance: " << variance << std::endl;
    std::cout << "Standard Deviation: " << stdDev << std::endl;

    return 0;
}