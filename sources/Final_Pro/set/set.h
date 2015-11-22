#ifndef SET_H
#define SET_H
#include <iostream>
#include "node.h"


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
    void print();

private:
    Node *root;
    void addToBeg(int);
    Node* searchByKey(int);
};

#endif // SET_H
