
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int *factorization(int n, int *count){
    int *array;
    (*count) = 1;
    /// Где память будет освобождена? Вдруг там забудут?
    array = (int *)malloc(sizeof(int));
    /// Компилятор говорит, что переменная p не используется
    const int p = n;
    for (int i = 2; ((i <= sqrt(n))&(n!=1)); ++i) {
        if ((n%i)==0){
            n=n/i;
            array[((*count)-1)] = i;
            (*count) ++;
            /// realloc в долгом цикле, это какая-то боль...
            array = (int *)realloc(array,(sizeof(int)*(*count)));
            i--;
        }
    }

        array[((*count)-1)] = n;

    return array;
}
