#include <iostream>
#include "node.h"
#include "stack.h"
#include "queue.h"
#include <string>
using namespace std;
int main()
{
	node* n1 = new node(1);
	node* n2 = new node(2);
	node* n3 = new node(3);
	node *n4 = new node(4);
    queue q1(n1);
	q1.add(n2);
	q1.add(n3);
	cout << "Printing Queue1\n";
	q1.print();
	if (!q1.isEmpty())
		cout <<"Popping from Queue1\n"<< q1.remove()->getValue()<<endl;

	cout << "Printing Queue1\n";
	q1.print();
	q1.add(n4);
	cout << "Printing Queue1\n";
	q1.print();
	cout << "Calling Copy Constructor to copy Queue1 into Queue2\n";
	queue q2(q1),q3;
	cout << "Printing Queue2\n";
	q2.print();
	cout << "Calling Assignment Operator to copy Queue1 into Queue3\n";
	q3 = q1;
	cout << "Printing Queue3\n";
	q3.print();
	cout << "Popping from Queue1\n" << q1.remove()->getValue() << endl;
	cout << "Printing Queue1\n";
	q1.print();
	cout << "Printing Queue2\n";
	q2.print();
	cout << "Printing Queue3\n";
	q3.print();
	system("pause");
}
