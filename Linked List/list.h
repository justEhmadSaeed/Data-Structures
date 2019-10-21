#pragma once
#include "node.h"
class list
{
private:
	node* head;
	int count;
public:
	list();		// Default Constructor
	list(node*& ptr);	// Single parameterized constructor, sets the head to ptr and count to 1
	list(const list& src);		// Copy Constructor	
	bool isEmpty()const;	// To check whether List Object is empty or not
	int getCount()const;	// To get the number of nodes in List Object
	list& insert(node*& ptr);	// To insert first node in List object
	list& insertAt(int index, node*& ptr);
	void deleteNodes(node*& ptr);	// To delete nodes from list from the given node to the end
	node* remove();		// To remove first node in the list	
	node* removeAt(int index);		// To remove a node of given index
	node& operator[](int index);	// To access the nodes by their indices, same as we do with arrays
	list& swapNodesAt(int index1, int index2);		// To swap two nodes at given indices in List
	list& reverse();	// To reverse the whole list object
	list& operator+(const list& robj);		// Operator+ function to concatenate two list objects
	void print()const;		// to print the list
	~list();
};

