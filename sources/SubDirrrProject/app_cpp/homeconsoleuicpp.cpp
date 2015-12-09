#include "homeconsoleuicpp.h"
#include <iostream>
using namespace std;

HomeConsoleUICPP::HomeConsoleUICPP()
{

}

void HomeConsoleUICPP::doWork()
{
    float length_horizontal_a, length_vertical_a, length_horizontal_h1, length_vertical_h1, length_horizontal_h2, length_vertical_h2;
    cout << "Homework #2: Input, output and cycles\n\n\n";
    cout << "Exercise #2 \n\n";
    cout << "Please, input length (horizontal)  of area a, b, p, q and r, s: \n";
    cin >> length_horizontal_a;
    cin >> length_vertical_a;
    cin >> length_horizontal_h1;
    cin >> length_vertical_h1;
    cin >> length_horizontal_h2;
    cin >> length_vertical_h2;
    Home homeWorker(length_horizontal_a, length_vertical_a, length_horizontal_h1, length_vertical_h1, length_horizontal_h2, length_vertical_h2);

    if (homeWorker.doWork() == 1)
        cout << "Yes\n";
    else
        cout << "No\n";

}
