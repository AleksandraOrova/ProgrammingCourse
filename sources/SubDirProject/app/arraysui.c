
#include <stdlib.h>
#include <stdio.h>
#include "arrays.h"

int readFile(char *filename,int *array, int size) {
  int count=0;

  FILE *input;
  input = fopen(filename, "r");

  for (int k = 0; k < size; ++k){
    fscanf(input, "%d", &array[k]);
    count++;
    }
  fclose(input);

  return count;
}

void writeData(char *filename1, char *filename2, int **dataArray, int size) {

    FILE *output1, *output2;
    output1 = fopen(filename1, "w");
    output2 = fopen(filename2, "w");

  for (int i = 0; i < size / 2; ++i) {
    fprintf(output1, "%d ", dataArray[0][i]);
    fprintf(output2, "%d ", dataArray[1][i]);
  }

  fflush(output1);
  fflush(output2);
  fclose(output1);
  fclose(output2);
}

void arraysUI() {

  int size;
  printf("Введите размер массива");

  if (1 == scanf("%d", &size) && (size % 2 == 0)) {

    int *inputDataArray = (int *)malloc(sizeof(int) * size);

    int **outputDataArray = (int **)malloc(sizeof(int *) * 2);
    for (int i = 0; i < 2; i++)
      outputDataArray[i] = (int *)malloc(sizeof(int) * (size / 2));

    readFile("input.txt", inputDataArray, size);
    fillArray(outputDataArray ,inputDataArray, size);
    writeData("out1.txt", "out2.txt", outputDataArray, size);

    free(inputDataArray);
    for (int i = 0; i < 2; i++)
      free(outputDataArray[i]);
    free(outputDataArray);

  } else
    printf("Неверный ввод данных");
}
