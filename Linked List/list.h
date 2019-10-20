#pragma once
#include "node.h"
class list
{
private:
	node* head;
	int count;
public:
	list();
	list(node*& ptr);
	list(const list& src);
	bool isEmpty()const;
	int getCount()const;
	list& insert(node*& ptr);
	list& insertAt(int index, node*& ptr);
	void deleteNodes(node*& ptr);
	node* remove();
	node* removeAt(int index);
	node& operator[](int index);
	list& swapNodesAt(int index1, int index2);
	list& reverse();
	list& operator+(const list& robj);
	void print()const;
	~list();
};

