#pragma once
#include <iostream>
#include "node.h"
#include "stack.h"
using namespace std;
class queue : protected stack
{
protected:
	node* tail;

public:
	queue();
	queue(node* &ptr);
	queue(const queue& src);
	// Copy Constructor to handle the empty case
	// queue (const queue & src) : stack((stack &)src);
	queue& operator=(const queue& src);	// assignment operator overloading
	node* remove();
	void print() const; // to print the Queue
	bool isEmpty();	// check whether queue is empty or not
	queue& add(node*& ptr);
};