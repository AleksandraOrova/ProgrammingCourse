#ifndef EXCEPTION
#define EXCEPTION
#include <exception>
#include "bankcpp.h"

class UnderNullException : public std::exception {
public:
    UnderNullException(const int summa) : summa(summa) {}
    int GetSumma() const {return summa;}
private:
    int summa;
};

class MoreThanHundred : public std::exception {
public:
    MoreThanHundred(const int percent) : percent(percent) {}
    int GetPercent() const {return percent;}
private:
    int percent;
};

#endif // EXCEPTION

