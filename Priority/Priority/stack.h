#pragma once
#include <iostream>
#include "node.h"
using namespace std;
class stack
{
protected:
	node *top;
	int count;  // Stores the number of nodes in the stack

public:
	// Default Constructor
	stack();

	// One node insertion constructor
	stack(node *&ptr);

	stack(const stack &src); // copy constructor

	stack &operator=(const stack &robj); // Assignment Operator overloading

	// cascaded push function to add a new node
	stack &push(node *&ptr);

	node *pop(); // to pop a node out of stack

	void print() const; // to print the stack

	bool isEmpty();						   // check whether stack is empty or not
	
	stack(ifstream &inFile);			   // Constructor to input stack from a file
	
	void writeToFile(ofstream &oFile);	 // Write the nodes of a stack to a file
	
	stack &readFromFile(ifstream &iFile); // Reads the nodes of a stack from a file
	
	//Destructor to delete the whole stack explicitly
	~stack();
};
