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
