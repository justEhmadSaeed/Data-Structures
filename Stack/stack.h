#pragma once
#include <iostream>
#include "node.h"
using namespace std;
class stack {
protected:
	node* top;
public:
	// Default Constructor
	stack();

	// One node insertion constructor
	stack(node*& ptr);

	stack(const stack& src); // copy constructor
	
	stack& operator=(const stack& robj); // Assignment Operator overloading

	// cascaded push function to add a new node
	stack& push(node*& ptr);

	node* pop(); // to pop a node out of stack

	void print() const; // to print the stack

	bool isEmpty();	// check whether stack is empty or not

	//Destructor to delete the whole stack explicitly
	~stack();
};
