#include "cmtoinchcpp.h"

cmtoinchcpp::cmtoinchcpp()
{

}

double cmtoinchcpp::cm_to_inch(double cm)
{
    return (cm/2.54f);
}

double cmtoinchcpp::inch_to_cm(double inch)
{
    return (inch*2.54f);
}
