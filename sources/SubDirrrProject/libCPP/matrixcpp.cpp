#include "matrixcpp.h"
#include <stdlib.h>

<<<<<<< HEAD
MatrixCPP::MatrixCPP(const int height, const int width)
{
    this->width = width;
    this->height = height;
    data = new int*[height];
=======
/// Добавить список инициализации
MatrixCPP::MatrixCPP(int height, int width)
{
    this->width = width;
    this->height = height;

    /// тут бы можно и вектор использовать
    data=(int **)malloc(height*sizeof(int*));
>>>>>>> 745ff464e96b4d4520f39862ad444ec10491c09c
    for (int i = 0; i<height; i++)
        data[i] = new int[width];
    fillSpiralMatrix();
}

MatrixCPP::~MatrixCPP(){
    for(int i = 0; i < height; i++)
<<<<<<< HEAD
=======
        /// delete[] должно быть
>>>>>>> 745ff464e96b4d4520f39862ad444ec10491c09c
        delete[] data[i];
    delete[] data;
}

void MatrixCPP::fillSpiralMatrix(){
    int j, rows = 0, cols = 0, k = 1;
    int horbeg = 0, horend = width-1, vertbeg = 0, vertend = height-1;
    while(1){
        for(j = horbeg; j<horend+1; j++)
            data[horbeg][j] = k++;
        if (++rows == height) return;
        for(j = vertbeg+1; j<vertend+1; j++)
            data[j][horend] = k++;
        if (++cols == width) return;
        for(j = horend-1; j>=horbeg; j--)
            data[vertend][j] = k++;
        if (++rows == height) return;
        for(j = vertend-1; j>=vertbeg+1; j--)
            data[j][horbeg] = k++;
        if (++cols == width) return;
        horbeg++; horend--; vertbeg++; vertend--;
    }
}

int MatrixCPP::getCell(const int y, const int x){
    if (x<0||y<0||x>=width||y>=height)
        return 0;
    return data[y][x];
}

int MatrixCPP::getHeight(){
    return height;
}

int MatrixCPP::getWidth(){
    return width;
}

ostream& operator<<(ostream& os, MatrixCPP& matrix){
    for (int i = 0; i< matrix.getHeight(); i++){
        for (int j = 0; j<matrix.getWidth(); j++)
            os << matrix.getCell(i, j) << " ";
        os << "\n";
    }
    return os;
}
