#pragma once
#include <iostream>
using namespace std;
class node
{
private:
	int data;
public:
	node* right = NULL;
	node* left = NULL;
	node();
	node(int d);
	void setData(int d);
	int getData();
	void print()const;
};

