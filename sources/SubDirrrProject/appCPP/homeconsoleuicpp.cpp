#include "homeconsoleuicpp.h"
#include "rectangle.h"
#include <iostream>
using namespace std;

HomeConsoleUICPP::HomeConsoleUICPP()
{

}

void HomeConsoleUICPP::doWork()
{
    cout << "Homework #2: Input, output and cycles\n\n\n";
    cout << "Exercise #2 \n\n";
    cout << "Please, input length (horizontal)  of area a, b, p, q and r, s: \n";
    int tempW, tempH;
    cin >> tempW;
    cin >> tempH;
    Rectangle Area(tempW, tempH);
    cin >> tempW;
    cin >> tempH;
    Rectangle Rect1(tempW, tempH);
    cin >> tempW;
    cin >> tempH;
    Rectangle Rect2(tempW, tempH);

    if (Area.canInsert(Rect1, Rect2))
        cout << "Yes\n";
    else
        cout << "No\n";

}
