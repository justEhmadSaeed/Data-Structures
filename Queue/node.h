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
	node(int v);							// One parameterized Constructor
	node(int v, int p);						// Two Parameterized Constructor
  	node(ofstream &oFile);                  // Constructor to write a node to a file
	node(ifstream &inFile);                 // Constructor to create node from a file
	void writeNodeToFile(ofstream &outData); // Writes the node to the given file
	void readNodeFromFile(ifstream &inData); // Reads the node from the given file and sets data according to the input
	int getValue()const;
	int getPriority() const;
	void setValue(int v);
	void setPriority(int p);
	void print();							// To print the value of node
};