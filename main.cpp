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

   
    printf("Average: %.0f\n", average);    
    printf("Median: %.0f\n", median);      
    printf("Variance: %.0f\n", variance);
    printf("Standard Deviation: %.0f\n", stdDev); 


    delete[] data;

    return 0;
}