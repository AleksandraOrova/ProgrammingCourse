
#include<stdio.h>
#include"matrix_console_ui.h"
#include"matrix.h"

void matrix_console_UI(){
    int n, m;
    printf("input n");
    scanf("%d", &n);
    printf("input m");
    scanf("%d", &m);
    int** array = initializeMatrix(n, m);
    fillSpiralMatrix(array, n, m);
    printMatrix(array, n, m);
}

void printMatrix(int** array, int n, int m){
    int i, j;
    for (i = 0; i<n; i++){
        for(j = 0; j<m; j++)
            printf("%4d ", array[i][j]);
        printf("\n");
    }
}
