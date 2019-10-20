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
	// Default Constructor
	queue();
	// Parameterized Constructor
	queue(node* &ptr);
	// Copy Constructor
	queue(const queue& src);
	// Copy Constructor to handle the empty case
	// queue (const queue & src) : stack((stack &)src);

	node* remove();

	queue& add(node*& ptr);
};