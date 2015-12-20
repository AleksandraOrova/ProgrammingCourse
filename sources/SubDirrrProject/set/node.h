#ifndef NODE_H
#define NODE_H


class Node
{
public:
    /// И они у вас в public доступе, кто угодно может поменять в любой момент
    int data;
    Node* next;
    Node(int);
    Node(int, Node*);
    ~Node();
};

#endif // NODE_H
