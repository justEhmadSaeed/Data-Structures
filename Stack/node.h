#pragma once
#include <iostream>
#include <fstream>

using namespace std;
class node
{
private:
	int priority;
	int value;

public:
	node *next = 0;
	node();									// Default Constructor
	node(int);							// One parameterized Constructor
	node(int , int);						// Two Parameterized Constructor
	node(ifstream &inFile);                 // Constructor to create node from a file
	void writeNodeToFile(ofstream &outData); // Writes the node to the given file
	void readNodeFromFile(ifstream &inData); // Reads the node from the given file and sets data according to the input
	int getValue()const;
	int getPriority() const;
	void setValue(int);
	void setPriority(int);
	void print();							// To print the value of node
};