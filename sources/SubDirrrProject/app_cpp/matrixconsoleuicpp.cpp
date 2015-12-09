#include "matrixconsoleuicpp.h"
#include <stdio.h>
#include <iostream>
using namespace std;

MatrixConsoleUICPP::MatrixConsoleUICPP()
{

}

void MatrixConsoleUICPP::doWork(char* input_file_name, char* output_file_name){

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

    int** array = initializeMatrix(n, m);
    for (i = 0; i < n; ++i)
        array[i] = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            fscanf(in, "%i\n", &array[i][j]);

    fillSpiralMatrix(array, n, m);
    printMatrix(array, n, m);

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            fprintf(out, "%i ", array[i][j]);
        fprintf(out, "\n");
    }

    for (i = 0; i < n; ++i)
        free(array[i]);
    free(array);
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
