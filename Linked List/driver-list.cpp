#include <iostream>
#include "node.h"
#include "list.h"
using namespace std;
int main() {
	node* n1 = new node(1);
	node* n2 = new node(2);
	node* n3 = new node(3);
	node* n4 = new node(4);
	node* n5 = new node(5);
	list l1(n1);

	if (!l1.isEmpty())
		l1.insertAt(1, n2);
	l1.insertAt(2, n3);
	cout << "Printing List 1:\n";
	l1.print();
	cout << "Count of List 1: " << l1.getCount() << endl;
	cout << "Calling Copy Constructor of List 2 to get copy of List 1:\n";
	list l2(l1);
	cout << "Printing List 2:\n";
	l2.print();
	cout << "Inserting 4 at index 1 of List2:\n";
	l2.insertAt(1, n4);
	cout << "Printing List 2\n";
	l2.print();
	cout << "Removing at index 2 of List2 \n";
	l2.removeAt(2);
	cout << "Printing List 2\n";
	l2.print();
	cout << "Printing List 1\n";
	l1.print();
	cout << "Value of node at index 2 in List1 by using [] operator\n";
	l1[2].print();
	cout << "Inserting 5 at index 5 of List1:\n";
	l1.insertAt(5, n5);
	cout << "Printing List 1\n";
	l1.print();
	cout << "Swaping nodes of List 1 between indices 1 & 3\n";
	l1.swapNodesAt(1, 3);
	cout << "Printing List 1\n";
	l1.print();
	cout << "Reversing List 1\n";
	l1.reverse();
	cout << "Printing List 1\n";
	l1.print();
	cout << "Printing List 2:\n";
	l2.print();
	cout << "operator+ calling of List2 and List1, changing List2, leaving List1 intact"<<endl;
	l2 + l1;
	cout << "Printing List 1\n";
	l1.print(); 
	cout << "Printing List 2\n";
	l2.print();
	system("pause");
}