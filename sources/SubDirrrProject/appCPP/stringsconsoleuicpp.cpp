#include "stringsconsoleuicpp.h"
#include"stringscpp.h"
#define N 255

<<<<<<< HEAD
=======

/// Зачем пустой конструктор
StringsConsoleUICPP::StringsConsoleUICPP()
{

}

>>>>>>> 745ff464e96b4d4520f39862ad444ec10491c09c
void StringsConsoleUICPP::doWork(){
    int n;
    cout << "Input number of lines ";
    cin >> n;
    cout << "Input text\n";
    string* text = new string[n];
    for (int i = 0 ; i< n ; i++)
        cin >> text[i];
    StringsCPP().spread_text(text, n);
    for (int i = 0; i< n; i++)
        cout << text[i];
}
