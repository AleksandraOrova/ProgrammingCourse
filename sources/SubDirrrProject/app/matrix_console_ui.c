#include<stdio.h>
#include"matrix_console_ui.h"
#include"matrix.h"

void matrix_console_UI(char* input_file_name, char* output_file_name){

    FILE* in;
    FILE* out;
    in = fopen(input_file_name, "r");
    out = fopen(output_file_name, "w");
    int m, n, i, j, k;

    printf("input n");
    scanf("%d", &n);
    printf("input m");
    scanf("%d", &m);
    fscanf(in, "%i", &k);

    /// Выделять и освобождать память следует на одном уровне абстракции,
    /// то есть нужно  в одно функции выделить и освободить память
    int** array = initializeMatrix(n, m);

    /// Зачем это дублирование, вроде уже выделили в вашем  initialize (хоть это и плохо)
    for (i = 0; i < n; ++i)
        array[i] = (int*) malloc(n * sizeof(int));

    /// Вот лучше бы это выделили в функцию, если хочется, а выделение памяти вернули
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            fscanf(in, "%i\n", &array[i][j]);

    fclose(in);

    fillSpiralMatrix(array, n, m);
    printMatrix(array, n, m);

    /// Вот лучше бы это выделили в функцию, если хочется, а выделение памяти вернули
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            fprintf(out, "%i ", array[i][j]);
        fprintf(out, "\n");
    }

    for (i = 0; i < n; ++i)
        free(array[i]);
    free(array);

    fclose(out);;
}

void printMatrix(int** array, int n, int m){
    int i, j;
    for (i = 0; i<n; i++){
        for(j = 0; j<m; j++)
            printf("%4d ", array[i][j]);
        printf("\n");
    }
}
