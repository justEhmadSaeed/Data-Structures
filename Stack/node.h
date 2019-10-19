#pragma once
#include <iostream>
using namespace std;
class node
{
private:
	int value;

public:
	node* next=0;
	node();
	node(int v);

	int getValue()const;

	void setValue(int v);

	void print();
};