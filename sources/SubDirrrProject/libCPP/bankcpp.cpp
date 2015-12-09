#include "bankcpp.h"

BankCPP::BankCPP(float summa, float percent)
{
    this->summa = summa;
    this->percent = percent;
}

float BankCPP::doWork()
{
    float result = summa;
    int i;
    for (i = 0; i < 5; i++)
        result *= (100 + percent) / 100;
    return result;
}
