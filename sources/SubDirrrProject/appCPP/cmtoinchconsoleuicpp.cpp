#include "cmtoinchconsoleuicpp.h"
#include "cmtoinchcpp.h"
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
    //CmToInchCPP cmToInchWorker;
    for (i = 1; i<=a; i++)
    {
        temp = CmToInchCPP().cm_to_inch(i);
        if (temp < tempInch)
            cout << temp << "\t" << i << endl;
        else
        {
            cout << tempInch << "\t" << CmToInchCPP().inch_to_cm(tempInch) << endl;
            i--;
            tempInch++;
        }

    }
}
