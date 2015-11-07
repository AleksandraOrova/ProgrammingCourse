
#include <stdlib.h>
#include <stdio.h>

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

void fillArray(int **outputDataArray, int *dataArray, int size) {


  qsort(dataArray, size, sizeof(int), cmp);

  int d = size, I = 0, min;

  for (int k = 0; k < (size / 2); k++) {
    min = abs(dataArray[0] - dataArray[1]);
    I = 0;
    for (int i = 1; i < (d - 1); i++) {
      int tmp = abs(dataArray[i] - dataArray[i + 1]);
      if (tmp < min) {
        min = tmp;
        I = i;
      }
    }

    outputDataArray[0][k] = dataArray[I];
    outputDataArray[1][k] = dataArray[I + 1];

    for (int i = 0; i < 2; i++)
      for (int o = I; o < d - 1; ++o) {
        int tmp = dataArray[o];
        dataArray[o] = dataArray[o + 1];
        dataArray[o + 1] = tmp;
      }

      d -= 2;
    }

  }
