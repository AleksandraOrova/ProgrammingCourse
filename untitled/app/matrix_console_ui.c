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

    int** array = initializeMatrix(n, m);
    for (i = 0; i < n; ++i)
        array[i] = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            fscanf(in, "%i\n", &array[i][j]);

    fillSpiralMatrix(array, n, m);
    printMatrix(array, n, m);

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            fprintf(out, "%i ", array[i][j]);
        fprintf(out, "\n");
    }

    for (i = 0; i < n; ++i)
        free(array[i]);
    free(array);
    fclose(in);
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

