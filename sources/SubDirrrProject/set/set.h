#ifndef SET_H
#define SET_H
#include <iostream>
#include "node.h"

/// Остальные классы у вас называются с большой буквы
class Set
{
public:

    Set();
    Set(const Set& source);
    ~Set();
    void add(int);
    void add(Set);
    bool contains(int);
    bool contains(Set);
    Set copy(Set);
    Set intersect(Set s);
    int count();
    bool isEmpty();

private:
    Node *root;
    void addToBeg(int);
    Node* searchByKey(int);
};

#endif // SET_H
