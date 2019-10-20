#pragma once
#include <iostream>
using namespace std;
class node
{
private:
	int priority;
	int value;

public:
	node *next = 0;
	node();
	node(int v);
	node(int v, int p);
	int getValue() const;
	void setValue(int v);
	int getPriority() const;
	void setPriority(int p);
	void print();
};