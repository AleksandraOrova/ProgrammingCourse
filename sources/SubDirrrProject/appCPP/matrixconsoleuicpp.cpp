#include "matrixconsoleuicpp.h"
#include "matrixcpp.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

void MatrixConsoleUICPP::printMatrix(MatrixCPP matrix){
    int i, j;
    for (i = 0; i<matrix.getHeight(); i++){
        for(j = 0; j<matrix.getWidth(); j++)
            cout << matrix.getCell(i, j) << " ";
        cout << endl;
    }
}

void MatrixConsoleUICPP::doWork(char* input_file_name, char* output_file_name){
    ifstream in(input_file_name);
    ofstream out(output_file_name);
    int m, n;

    in >> n;
    in >> m;

    MatrixCPP matrix(n, m);

    cout << matrix;
    out << matrix;

    in.close();
    out.close();
}
