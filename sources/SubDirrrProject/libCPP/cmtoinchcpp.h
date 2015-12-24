#ifndef CMTOINCHCPP_H
#define CMTOINCHCPP_H

/// где консты?
class CmToInchCPP
{
private:
    static const double KOEFF = 2.54f;
public:
    static double cm_to_inch(double);
    static double inch_to_cm(double);
};

#endif // CMTOINCHCPP_H
