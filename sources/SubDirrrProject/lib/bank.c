#include"bank.h"

double compoundInterest(double summa, double percent, int n)
{
    double result = summa;
    int i;
    for (i = 0; i < n; i++)
        result *= (100 + percent) / 100;
    return result;
}
