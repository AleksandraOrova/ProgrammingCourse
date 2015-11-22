#include <iostream>
#include "set.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    int v=5;
    XoGame xog;
    xog.helloWorld();
    xog.setMyVar(v);
    cout << xog.getMyVar() << endl;
    return 0;
}
