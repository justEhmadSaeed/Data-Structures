#include <iostream>
#include "node.h"
#include "stack.h"
#include <string>
using namespace std;
int main()
{
	node *n1= new node(12);
    stack s1(n1);
	s1.print();
	system("pause");
}
