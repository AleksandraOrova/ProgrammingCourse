#include "homeconsoleuicpp.h"
#include "rectangle.h"
#include <iostream>
#include "exception.h"
using namespace std;

/// Зачем пустой конструктор
HomeConsoleUICPP::HomeConsoleUICPP()
{

}

void HomeConsoleUICPP::doWork()
{
    cout << "Homework #2: Input, output and cycles\n\n\n";
    cout << "Exercise #2 \n\n";
    cout << "Please, input length (horizontal)  of area a, b, p, q and r, s: \n";
    double tempW, tempH;
    cin >> tempW;
    cin >> tempH;
    Rectangle Area(tempW, tempH);
    cin >> tempW;
    cin >> tempH;
    Rectangle Rect1(tempW, tempH);
    cin >> tempW;
    cin >> tempH;
    Rectangle Rect2(tempW, tempH);

    try{
        if (Area.canInsert(Rect1, Rect2))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    catch(UnderNullExceptionH& exp){
        cout << "Height is under Null. Current size: " << exp.GetHeight()
             << endl;
    }
    catch(UnderNullExceptionW& exp){
        cout << "Width is under Null. Current size: " << exp.GetWidth()
             << endl;
    }

}
