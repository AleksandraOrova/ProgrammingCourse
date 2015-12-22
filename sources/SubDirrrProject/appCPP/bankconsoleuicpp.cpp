#include "bankconsoleuicpp.h"
#include "bankcpp.h"
#include "exception.h"
#include <iostream>
using namespace std;

BankConsoleUICPP::BankConsoleUICPP()
{

}

void BankConsoleUICPP::doWork()
{
    float summa, percent;
    cout << "\tHomework #1: Input, output and cycles" << endl;
    cout << "Exercise #1" << endl << endl;
    cout << "Please, input how much money You want to put to the bank:" << endl;
    cin >> summa;
    cout << "    Please, input what is the percent at Your bank:" << endl;
    cin >> percent;
    //BankCPP bankWorker(summa, percent);
    try{
        cout << "After 5 years You will have " << (BankCPP().compoundInterest(summa, percent)) << "rubbles" << endl;
    }
    catch(UnderNullException& exp){
        cout << "Summa under Null. Current size: " << exp.GetSumma()
             << endl;
    }

    catch(MoreThanHundred& exp){
        cout << "Percent is more than hundred. Current size: " << exp.GetPercent()
             << endl;
    }
}
