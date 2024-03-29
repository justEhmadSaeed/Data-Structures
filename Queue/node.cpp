#include "node.h"

// Default Constructor assigns value & Priority to 0
node::node() :value(0), priority(0) {}

// One parameterized Constructor assigns value to data & Priority to 0
node::node(int data) : value(data), priority(0) {}

// Two parameterized Constructor assigns value & Priority
node::node(int data, int p) : value(data), priority(p) {}

// Constructor to create node from a file
node::node(ifstream& inFile) : value(0), priority(0) {
	inFile.read((char*)this, sizeof(this->value) * 2);
}

// Writes the node to the given file
void node::writeNodeToFile(ofstream& outData) {

	outData.write((char*)this, sizeof(this->value) * 2);
}

// Reads the node from the given file and sets data according to the input
void node::readNodeFromFile(ifstream& inData) {

	inData.read((char*)this, sizeof(this->value) * 2);
}

// To get the value of node
int node::getValue() const {
	return value;
}
// To set the value of node
void node::setValue(int data) {
	value = data;
}
// To get the Priority of Node
int node::getPriority() const {
	return priority;
}
// To set the Priority of Node
void node::setPriority(int p) {
	priority = p;
}
// To print nodes
void node::print() {
	cout << value << endl;
}

