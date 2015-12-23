#ifndef MATRIXCPP_H
#define MATRIXCPP_H
#include <iostream>
using namespace std;

class MatrixCPP
{
private:
    int** data;
    int width;
    int height;
    void fillSpiralMatrix();
public:
    MatrixCPP(int height, int width);
    ~MatrixCPP();
    int getCell(int y, int x);
    int getHeight();
    int getWidth();
    friend ostream& operator<<(ostream& os, MatrixCPP &matrix);
};

#endif // MATRIXCPP_H
