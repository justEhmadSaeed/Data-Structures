#include "node.h"

node::node():value(0) {}

node::node(int v) :value(v) {}

int node::getValue() const {
	return value;
}

void node::setValue(int v) {
	value = v;
}

void node::print() {
	cout << value << endl;
}

