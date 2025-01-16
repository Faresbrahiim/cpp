#include <iostream>
#include "externalFunctions/calcule.h" 

int main() {
    size_t size;
    double* data = ExportData("data.txt", size);
    if (!data) {
        std::cerr << "Error: Failed to read data from file." << std::endl;
        return 1; 
    }

    
    double average = Average(data, size);
    double median = Median(data, size);
    double variance = Variance(average, data, size);
    double stdDev = StandardDeviation(variance);

   
    std::cout << "Average: " << average << std::endl;
    std::cout << "Median: " << median << std::endl;
    std::cout << "Variance: " << variance << std::endl;
    std::cout << "Standard Deviation: " << stdDev << std::endl;


    delete[] data;

    return 0;
}