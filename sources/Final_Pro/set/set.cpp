#include "set.h"
#include "node.h"

set::set()
{
    root = nullptr;
}

set::~set()
{
    Node *temp;
    while(root != nullptr)
    {
        temp = root;
        root = root->next;
        temp->~Node();
    }
}

set set::copy(set source)
{
    Node *temp = source.root;
    set *result = new set();
    while(temp!=nullptr){
        result->addToBeg(temp->data);
        temp = temp->next;
    }
    return *result;
}

void set::addToBeg(int data)
{
    root = new Node(data, root);
}

Node* set::searchByKey(int data)
{
    Node *temp=root;
    while(temp!=nullptr && temp->data!=data)
        temp = temp->next;
    return temp;
}

void set::add(int data)
{
    if (searchByKey(data)!=nullptr)
        return;
    addToBeg(data);
}

void set::add(set added)
{
    Node *temp = added.root;
    while(temp!=nullptr){
        add(temp->data);
        temp = temp->next;
    }
}

bool set::contains(set s)
{
    Node *temp = s.root;
    bool result = true;
    while(temp!=nullptr){
        result = result && contains(temp->data);
        temp = temp->next;
    }
    return result;
}

bool set::contains(int data)
{
    return (searchByKey(data)!=nullptr);
}

set set::intersect(set s)
{
    set *result = new set();
    Node *temp = root;
    while(temp!=nullptr)
    {
        if (s.contains(temp->data))
            result->add(temp->data);
        temp = temp->next;
    }
    return *result;
}

int set::count()
{
    Node *temp = root;
    int result = 0;
    while(temp!=nullptr)
    {
        result++;
        temp = temp->next;
    }
    return result;
}

bool set::isEmpty()
{
    return (count()<=0);
}

void set::print()
{
    std::cout << "(" << count() << "):\t";

    Node *temp = root;
    while(temp!=nullptr){
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
