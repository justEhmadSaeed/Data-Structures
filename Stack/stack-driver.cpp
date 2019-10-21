#include <iostream>
#include "node.h"
#include "stack.h"
#include <string>
#include <fstream>
using namespace std;
int main()
{
	node* n1 = new node(1);
	node* n2 = new node(2);
	node* n3 = new node(3);
	node* n4 = new node(4);
	stack s1(n1);
	(s1.push(n2)).push(n3);
	cout << "Printing Stack1\n";
	s1.print();
	if (!s1.isEmpty())
		cout << "Popping from Stack1\n" << s1.pop()->getValue() << endl;

	cout << "Printing Stack1\n";
	s1.print();
	cout << "Calling Copy Constructor to copy Stack1 into Stack2\n";
	stack s2(s1), s3;
	cout << "Printing Stack2\n";
	s2.print();
	cout << "Calling Assignment Operator to copy Stack1 into Stack3\n";
	s3 = s1;
	cout << "Printing Stack3\n";
	s3.print();
	cout << "File Handling\n";
	// File Handling
	ifstream inFile;
	ofstream oFile;
	s1.push(n4);
	cout << "Printing Stack1\n";
	s1.print();
	oFile.open("data.txt");
	s1.writeToFile(oFile);
	oFile.close();
	inFile.open("data.txt");
	stack s4(inFile);
	//s4.readFromFile(inFile);
	cout << "Printing Stack4\n";
	s4.print();
	inFile.close();
	system("pause");
}
