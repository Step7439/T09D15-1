#include <math.h>
#include "data_stat.h"
#include <stdlib.h>

double max(double *data, int n) {
    double sum = data[0];
    for (int i = 1; i < n; i++) {
        if (sum < data[i]) {
            sum = data[i];
        }
    }
  return sum;
}
double min(double *data, int n) {
    double sum = data[0];
    for (int i = 1; i < n; i++) {
        if (sum > data[i]) {
            sum = data[i];
        }
    }
  return sum;
}
double mean(double *data, int n){
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + data[i];
    }
    return sum / n;
}
double variance(double *data, int n) {
    double mean_val = mean(data, n);
    double variance_val = 0;
    for (int i = 0; i < n; i++) {
        variance_val += (data[i] - mean_val) * (data[i] - mean_val);                    //pow(a[i] - mean_val, 2);
    }
    return variance_val / n;
}