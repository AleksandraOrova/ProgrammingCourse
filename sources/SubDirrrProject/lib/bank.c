#include"bank.h"

double bank(double summa, double percent)
{
    double result = summa;
    int i;
    for (i = 0; i < 5; i++)
        result *= (100 + percent) / 100;
    return result;
}
