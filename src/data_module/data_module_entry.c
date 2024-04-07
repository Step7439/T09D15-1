#include <stdio.h>
#include <stdlib.h>
#include "../data_libs/data_io.h"
#include "../data_module/data_process.h"

int main() {
  double *data;
  int n;
  scanf("%d", &n);

  data = (double *)malloc(n * sizeof(double));

  input(data, n);

  if (normalization(data, n) != 0)
    output(data, n);
  else
    printf("ERROR");

  free(data);
}
