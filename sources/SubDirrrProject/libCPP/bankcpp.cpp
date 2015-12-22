#include "exception.h"
#include "bankcpp.h"

float BankCPP::compoundInterest(float summa, float percent)
{
    if(summa < 0)
        throw UnderNullException(summa);
    if(percent > 100)
        throw MoreThanHundred(percent);
    float result = summa;
    int i;
    for (i = 0; i < 5; i++)
        result *= (100 + percent) / 100;
    return result;
}
