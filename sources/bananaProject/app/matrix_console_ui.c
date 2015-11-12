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
