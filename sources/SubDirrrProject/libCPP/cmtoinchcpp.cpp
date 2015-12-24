#include "cmtoinchcpp.h"
#include "exception.h"

double CmToInchCPP::cm_to_inch(const double cm)
{
    if(cm < 0)
        throw UnderNullExceptionCm(cm);
    return (cm/KOEFF);
}

double CmToInchCPP::inch_to_cm(const double inch)
{
    return (inch*KOEFF);
}
