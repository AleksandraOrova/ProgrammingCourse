#include "bankconsoleuicpp.h"
#include "bankcpp.h"
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
    cout << "After 5 years You will have " << (BankCPP().compoundInterest(summa, percent)) << "rubbles" << endl;
}
