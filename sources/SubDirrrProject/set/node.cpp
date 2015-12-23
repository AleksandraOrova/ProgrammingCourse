#include "node.h"

Node::Node(int d, Node* n){
    data = d;
    next = n;
}
Node::Node(int d){
    data = d;
    next = nullptr;
}
Node::~Node(){
}

void Node::setData(int data){
    this->data = data;
}

void Node::setNext(Node* next){
    this->next = next;
}

int Node::getData(){
    return data;
}

Node* Node::getNext(){
    return next;
}
