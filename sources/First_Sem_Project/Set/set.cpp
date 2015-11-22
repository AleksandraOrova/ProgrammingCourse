#include <iostream>
#include "set.h"


XoGame::XoGame()
{
    std::cout << "Hello constructor" << std::endl;
}

void XoGame::helloWorld()
{
    std::cout << "Hello method" << std::endl;
}

void XoGame::setMyVar(int var)
{
    myVar=var;
}

int XoGame::getMyVar()
{
    return myVar;
}

XoGame::~XoGame()
{
   std::cout << "Hello destructor" << std::endl;
}
