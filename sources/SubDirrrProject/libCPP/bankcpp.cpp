#include "exception.h"
#include "bankcpp.h"

double BankCPP::compoundInterest(double summa, double percent)
{
    if(summa < 0)
        throw UnderNullExceptionSumma(summa);
    if(percent > 100)
        throw MoreThanHundred(percent);
    double result = summa;
    int i;
    for (i = 0; i < 5; i++)
        result *= (100 + percent) / 100;
    return result;
}
