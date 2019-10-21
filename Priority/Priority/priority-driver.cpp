#include <iostream>
#include "node.h"
#include "stack.h"
#include "queue.h"
#include "priority.h"
#include <string>
using namespace std;
int main()
{
	node* n1 = new node(1,4);
	node* n2 = new node(2,3);
	node* n3 = new node(3,2);
	node *n4 = new node(4,1);
    priority p1(n1);
	p1.add(n2);
	p1.add(n3);
	cout << "\nPrinting priority1\n";
	p1.print();
	if (!p1.isEmpty())
		cout << "Popping from priority1\n";
		(p1.remove())->print();

	cout << "\nPrinting priority1\n";
	p1.print();
	p1.add(n4);
	cout << "\nPrinting priority1\n";
	p1.print();
	cout << "Calling Copy Constructor to copy priority1 into priority2\n";
	priority p2(p1),p3;
	cout << "\nPrinting priority2\n";
	p2.print();
	cout << "Calling Assignment Operator to copy priority1 into priority3\n";
	p3 = p1;
	cout << "\nPrinting priority3\n";
	p3.print();
	cout << "Popping from priority1\n";
	(p1.remove())->print();
	cout << "\nPrinting priority1\n";
	p1.print();
	cout << "\nPrinting priority2\n";
	p2.print();
	cout << "\nPrinting priority3\n";
	p3.print();
	system("pause");
}
