#include <math.h>
#include <stdio.h>

void bank(int a, int b)
{
    int Rez;
    Rez = a*(1 + (b / 100)) ^ 5;
    if (Rez > 0)
        printf("After 5 years You will have %d rubbles.\n\n", &Rez);
    else
        printf("Error");
}
