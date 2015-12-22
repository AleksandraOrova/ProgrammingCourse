#include "bankcpp.h"

float BankCPP::compoundInterest(float summa, float percent)
{
    float result = summa;
    int i;
    for (i = 0; i < 5; i++)
        result *= (100 + percent) / 100;
    return result;
}
