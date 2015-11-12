#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
int** initializeMatrix(int n, int m){
    int **array, i;
    array=(int **)malloc(n*sizeof(int*));
    for (i = 0; i<n; i++)
            array[i]=(int*)malloc(m*sizeof(int));
    return array;
}

void fillSpiralMatrix(int** array, int n, int m){
    int i, j, k = 1;
    int horbeg = 0, horend = m-1, vertbeg = 0, vertend = n-1;
    while(1){
        for(j = horbeg; j<horend+1; j++)
            array[horbeg][j] = k++;
        if (horbeg+1 > n/2)
            return;
        for(j = vertbeg+1; j<vertend+1; j++)
            array[j][horend] = k++;
        if (vertbeg > m/2)
            return;
        for(j = horend-1; j>=horbeg; j--)
            array[vertend][j] = k++;
        if (horend < n/2)
            return;
        for(j = vertend-1; j>=vertbeg+1; j--)
            array[j][horbeg] = k++;
        if (vertend < m/2)
            return;
        horbeg++; horend--; vertbeg++; vertend--;
    }
}

void printMatrix(int** array, int n, int m){
    int i, j;
    for (i = 0; i<n; i++){
        for(j = 0; j<m; j++)
            printf("%4d ", array[i][j]);
        printf("\n");
    }
}
