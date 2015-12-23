#include "cmtoinchcpp.h"
#include "exception.h"

double CmToInchCPP::cm_to_inch(double cm)
{
    if(cm < 0)
        throw UnderNullExceptionCm(cm);
    return (cm/2.54f);
}

double CmToInchCPP::inch_to_cm(double inch)
{
    return (inch*2.54f);
}
