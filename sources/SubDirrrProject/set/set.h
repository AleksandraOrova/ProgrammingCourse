#ifndef SET_H
#define SET_H
#include <iostream>
#include "node.h"

/// Остальные классы у вас называются с большой буквы
class set
{
public:

    set();
    ~set();
    void add(int);
    void add(set);
    bool contains(int);
    bool contains(set);
    set copy(set);
    set intersect(set s);
    int count();
    bool isEmpty();

private:
    Node *root;
    void addToBeg(int);
    Node* searchByKey(int);
};

#endif // SET_H
