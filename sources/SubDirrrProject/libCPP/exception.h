#ifndef EXCEPTION
#define EXCEPTION
#include <exception>
#include "bankcpp.h"
#include "cmtoinchcpp.h"
#include "rectangle.h"

class UnderNullExceptionSumma : public std::exception {
public:
    UnderNullExceptionSumma(const int summa) : summa(summa) {}
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

class UnderNullExceptionCm : public std::exception {
public:
    UnderNullExceptionCm(const int cm) : cm(cm) {}
    int GetCm() const {return cm;}
private:
    int cm;
};

class UnderNullExceptionW : public std::exception {
public:
    UnderNullExceptionW(const int width) : width(width) {}
    int GetWidth() const {return width;}
private:
    int width;
};

class UnderNullExceptionH : public std::exception {
public:
    UnderNullExceptionH(const int height) : height(height) {}
    int GetHeight() const {return height;}
private:
    int height;
};

class WrongArraySize : public std::exception {
public:
    WrongArraySize(const int size) : size(size) {}
    int GetSize() const {return size;}
private:
    int size;
};


#endif // EXCEPTION

