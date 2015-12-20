#include "matrixconsoleuicpp.h"
#include "matrixcpp.h"
#include <stdio.h>
#include <iostream>
using namespace std;
//MatrixConsoleUICPP matrixWorker; matrixWorker.doWork();
MatrixConsoleUICPP::MatrixConsoleUICPP()
{

}

void MatrixConsoleUICPP::doWork(char* input_file_name, char* output_file_name){
/// Почему не файловые потоки, раз уж затеяли ввод-вывод
    FILE* in;
    FILE* out;
    in = fopen(input_file_name, "r");
    out = fopen(output_file_name, "w");
    int m, n, i, j, k;

    cout << "input n";
    cin >> n;
    cout << "input m";
    cin >> m;
    fscanf(in, "%i", &k);

    MatrixCPP matrixWorker;

    int** array = matrixWorker.initializeMatrix(n, m);

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            fscanf(in, "%i\n", &array[i][j]);

    matrixWorker.fillSpiralMatrix(array, n, m);
    printMatrix(array, n, m);

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            fprintf(out, "%i ", array[i][j]);
        fprintf(out, "\n");
    }

    for (i = 0; i < n; ++i)
        delete array[i];
    delete array;
    fclose(in);
    fclose(out);;
}

void MatrixConsoleUICPP::printMatrix(int** array, int n, int m){
    int i, j;
    for (i = 0; i<n; i++){
        for(j = 0; j<m; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
}
