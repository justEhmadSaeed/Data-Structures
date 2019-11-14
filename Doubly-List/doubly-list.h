#pragma once
#include "node.h"
class Doubly
{
private:
	int count;
	node* headRight, * headLeft;
public:
	Doubly();
	Doubly(node* ptr);
	Doubly& insertLeft(node* ptr);
	Doubly& insertRight(node* ptr);
	Doubly& insertAt(int index, node* ptr);
	node* removeLeft();
	node* removeRight();
	node* removeAt(int index);
	void print(bool left2Right)const;
	~Doubly();


};

