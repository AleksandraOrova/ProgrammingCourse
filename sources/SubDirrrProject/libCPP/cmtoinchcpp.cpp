#include "cmtoinchcpp.h"

double CmToInchCPP::cm_to_inch(double cm)
{
    return (cm/2.54f);
}

double CmToInchCPP::inch_to_cm(double inch)
{
    return (inch*2.54f);
}
