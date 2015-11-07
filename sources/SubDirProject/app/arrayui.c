
#include <stdlib.h>
#include <stdio.h>
#include "arrays.h"

char inputFileName[] = "input.txt";
char output1FileName[] = "output1.txt";
char output2FileName[] = "output2.txt";

int readFile(char *filename, int *array, int size) {
  int count = 0;

  FILE *input;
  input = fopen(filename, "r");

  for (int k = 0; k < size; ++k) {
    fscanf(input, "%d", &array[k]);
    count++;
  }
  fclose(input);

  return count;
}

void writeFile(char *filename1, char *filename2, int **dataArray, int size) {

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
  printf("Введите размер массива\n");

  if (1 == scanf("%d", &size) && (size % 2 == 0)) {

    int *inputDataArray = (int *)malloc(sizeof(int) * size);

    int **outputDataArray = (int **)malloc(sizeof(int *) * 2);
    for (int i = 0; i < 2; i++)
      outputDataArray[i] = (int *)malloc(sizeof(int) * (size / 2));

    readFile(inputFileName, inputDataArray, size);
    splitArray(outputDataArray, inputDataArray, size);
    writeFile(output1FileName, output2FileName, outputDataArray, size);

    free(inputDataArray);
    for (int i = 0; i < 2; i++)
      free(outputDataArray[i]);
    free(outputDataArray);

    printf("Выходные данные были записаны в файлы %s, %s", output1FileName,
           output2FileName);

  } else
    printf("Неверный ввод данных");
}
