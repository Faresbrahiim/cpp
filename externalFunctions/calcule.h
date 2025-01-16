#ifndef CALCULE_H
#define CALCULE_H

#include <cstddef> // For size_t


double Average(const double data[], size_t size);
double Median(double data[], size_t size);
double Variance(double average, const double data[], size_t size);
double StandardDeviation(double variance);

#endif 