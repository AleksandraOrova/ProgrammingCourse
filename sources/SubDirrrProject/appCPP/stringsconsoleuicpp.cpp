#include "stringsconsoleuicpp.h"
#include"stringscpp.h"
#define N 255

StringsConsoleUICPP::StringsConsoleUICPP()
{

}

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
