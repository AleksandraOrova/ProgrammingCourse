#include <stdio.h>
#include <stdlib.h>
#include "factorization.h"

void factorizationUI(){
    printf(" ");
    int n;
    scanf("%d", &n);
    int count;
    int *array = factorization(n, &count);
    printf("1");
    for(int i=0; i<count; i++)
        printf("*%d", array[i]);
    free(array);
}
