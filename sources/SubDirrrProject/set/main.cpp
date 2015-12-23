#include <iostream>
#include "set.h"

using namespace std;

int main()
{
    Set *s1 = new Set();
    Set *s2 = new Set();
    s1->add(5);
    s1->add(2);
    s1->add(7);
    s1->add(9);
    s1->add(1);
    s1->add(9);
    s1->add(9);
    s1->add(9);
    s1->add(9);
    s2->add(-1);
    s2->add(-3);
    s2->add(-5);
    s2->add(2);

    return 0;
}

