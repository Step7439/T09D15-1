#include "data_sort.h"

void sort(double *data, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (data[j + 1] < data[j]) {
          int tmp = data[j];
          data[j] = data[j + 1];
          data[j + 1] = tmp;
      }
    }
  }
}