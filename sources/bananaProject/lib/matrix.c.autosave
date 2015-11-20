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
    int j, rows = 0, cols = 0, k = 1;
    int horbeg = 0, horend = m-1, vertbeg = 0, vertend = n-1;
    while(1){
        for(j = horbeg; j<horend+1; j++)
            array[horbeg][j] = k++;
        if (++rows == n) return;
        for(j = vertbeg+1; j<vertend+1; j++)
            array[j][horend] = k++;
        if (++cols == m) return;
        for(j = horend-1; j>=horbeg; j--)
            array[vertend][j] = k++;
        if (++rows == n) return;
        for(j = vertend-1; j>=vertbeg+1; j--)
            array[j][horbeg] = k++;
        if (++cols == m) return;
        horbeg++; horend--; vertbeg++; vertend--;
    }
}
