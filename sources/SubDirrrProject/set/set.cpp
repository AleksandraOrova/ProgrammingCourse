#include "set.h"
#include "node.h"

Set::Set()
{
    root = nullptr;
}
Set::Set(const Set& source)
{
    Node *temp = source.root;
    root = nullptr;
    while(temp!=nullptr){
        addToBeg(temp->getData());
        temp = temp->getNext();
    }
}

Set::~Set()
{
    Node *temp;
    while(root != nullptr)
    {
        temp = root;
        root = root->getNext();
        temp->~Node();
    }
}

/// Нужен конструктор копирования
Set Set::copy(Set source)
{
    Node *temp = source.root;
    Set *result = new Set();
    while(temp!=nullptr){
        result->addToBeg(temp->getData());
        temp = temp->getNext();
    }
    return *result;
}

void Set::addToBeg(int data)
{
    root = new Node(data, root);
}

Node* Set::searchByKey(int data)
{
    Node *temp=root;
    while(temp!=nullptr && temp->getData()!=data)
        temp = temp->getNext();
    return temp;
}

void Set::add(int data)
{
    if (searchByKey(data)!=nullptr)
        return;
    addToBeg(data);
}

void Set::add(Set added)
{
    Node *temp = added.root;
    while(temp!=nullptr){
        add(temp->getData());
        temp = temp->getNext();
    }
}

bool Set::contains(Set s)
{
    Node *temp = s.root;
    bool result = true;
    while(temp!=nullptr){
        result = result && contains(temp->getData());
        temp = temp->getNext();
    }
    return result;
}

bool Set::contains(int data)
{
    return (searchByKey(data)!=nullptr);
}


Set Set::intersect(Set s)
{
    Set *result = new Set();
    Node *temp = root;
    while(temp!=nullptr)
    {
        if (s.contains(temp->getData()))
            result->add(temp->getData());
        temp = temp->getNext();
    }
    return *result;
}

int Set::count()
{
    Node *temp = root;
    int result = 0;
    while(temp!=nullptr)
    {
        result++;
        temp = temp->getNext();
    }
    return result;
}

bool Set::isEmpty()
{
    return (count()<=0);
}
