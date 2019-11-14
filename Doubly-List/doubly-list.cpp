#include "doubly-list.h"
Doubly::Doubly() :headLeft(NULL), headRight(NULL),count(0) {}
Doubly::Doubly(node* ptr) : headLeft(NULL), headRight(NULL), count(1) {}
Doubly& Doubly::insertLeft(node* ptr) {}
Doubly& Doubly::insertRight(node* ptr) {}
Doubly& Doubly::insertAt(int index, node* ptr) {}
node* Doubly::removeLeft() {}
node* Doubly::removeRight() {}
node* Doubly::removeAt(int index) {}
void Doubly::print(bool left2Right)const{
    node* ptr;
    int i=0;
    if(left2Right)
        for (ptr = headLeft; i < count; ++i, ptr = ptr->right)
            ptr->print();
    else
        for(ptr = headRight; i < count; ++i, ptr= ptr->left)
            ptr->print();
}
Doubly::~Doubly()
{
}