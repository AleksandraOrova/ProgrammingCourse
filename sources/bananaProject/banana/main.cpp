#include <iostream>
#include "set.h"
using namespace std;

int main()
{
    cout << "My first C++ project!" << endl;
    int v=5;
    Set set;
    set.Copy();
    set.Summa();
    set.Intersection();
    set.Add();
    set.Include();
    set.setMyVar(v);
    cout << set.getMyVar() << endl;
    return 0;
}
