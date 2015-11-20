#include <iostream>
#include "set.h"


Set::Set()
{
    std::cout << "Hello constructor" << std::endl;
}

void Set::Copy()
{
    std::cout << "Hello copying" << std::endl;
}

void Set::Summa()
{
    std::cout << "Hello summa" << std::endl;
}

void Set::Intersection()
{
    std::cout << "Hello intersection" << std::endl;
}

void Set::Add()
{
    std::cout << "Hello add" << std::endl;
}

void Set::Include()
{
    std::cout << "Hello include" << std::endl;
}

void Set::setMyVar(int var)
{
    myVar=var;
}

int Set::getMyVar()
{
    return myVar;
}

Set::~Set()
{
   std::cout << "Hello destructor" << std::endl;
}
