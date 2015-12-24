#include "cmtoinchconsoleuicpp.h"
#include "cmtoinchcpp.h"
#include "exception.h"
#include <iostream>
using namespace std;

void CmToInchConsoleUICPP::doWork()
{
    int a;
    cout << "Input cm";
    cin >> a;
    double i, temp, tempInch = 1;
    //CmToInchCPP cmToInchWorker;
    try{
        for (i = 1; i<=a; i++){
            temp = CmToInchCPP().cm_to_inch(i);
            if (temp < tempInch)
                cout << temp << "\t" << i << endl;
            else{
                cout << tempInch << "\t" << CmToInchCPP().inch_to_cm(tempInch) << endl;
                i--;
                tempInch++;
                }
            }
        }
    catch(UnderNullExceptionCm& exp){
        cout << "Cm is under Null. Current size: " << exp.GetCm()
             << endl;
    }
}
