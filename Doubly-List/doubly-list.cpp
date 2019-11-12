#include "doubly-list.h"
Doubly::Doubly() :headLeft(NULL), headRight(NULL),count(0) {}
Doubly::Doubly(node* ptr) : headLeft(NULL), headRight(NULL), count(1) {}
Doubly& Doubly::insertLeft(node* ptr) {}
Doubly& Doubly::insertRight(node* ptr) {}
Doubly& Doubly::insertAt(int index, node* ptr) {}
node* Doubly::removeLeft() {}
node* Doubly::removeRight() {}
node* Doubly::removeAt(int index) {}
Doubly::~Doubly()
{
}