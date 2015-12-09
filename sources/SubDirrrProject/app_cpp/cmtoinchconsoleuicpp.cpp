#include "cmtoinchconsoleuicpp.h"
#include <iostream>
using namespace std;

CmToInchConsoleUICPP::CmToInchConsoleUICPP()
{

}


void CmToInchConsoleUICPP::doWork()
{
    int a;
    cout << "Input cm";
    cin >> a;
    double i, temp, tempInch = 1;
    cmtoinch cmToInchWorker();
    for (i = 1; i<=a; i++)
    {
        temp = cmToInchWorker.cm_to_inch(i);
        if (temp < tempInch)
            cout << temp << "\t" << i << endl;
        else
        {
            cout << tempInch << "\t" << cmToInchWorker.inch_to_cm(tempInch) << endl;
            i--;
            tempInch++;
        }

    }
}
