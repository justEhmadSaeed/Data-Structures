#include "node.h"
#include "CirList.h"
#include <iostream>
using namespace std;
int main() {
	node* n1 = new node(1);
	node* n2 = new node(2);
	node* n3 = new node(3);
	node* n4 = new node(4);
	node* n5 = new node(5);

	CirList C1(n1);
	C1.insert(n2).insertAt(1, n3);
	C1.print();
	C1.Swaping(0, 1);
	C1.print();
	C1.insert(n4).insert(n5);
	C1.print();
	C1.flip();
	C1.print();
	C1.remove();
	C1.print();
	C1.removeAt(2);
	C1.print();
	C1[0].print();
	C1[1].print();
	C1[4].print();
	system("pause");
}