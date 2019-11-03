#pragma once
#include "node.h"
#include <iostream>
class CirList
{
private:
	int count;
	node* head;
public:
	CirList();
	CirList(node* ptr);
	CirList(const CirList &src);
	CirList& insert(node*& ptr);
	CirList& insertAt(int index, node*& ptr);
	node* remove();
	node* removeAt(int index);
	CirList& operator=(const CirList& src);
	CirList& Swaping(int index1, int index2);
	CirList& flip();
	void print()const;
	~CirList();
};

