#include "node.h"

node::node():value(0),priority(0) {}

node::node(int v) :value(v),priority(0) {}

node::node(int v, int p) :value(v),priority(p) {}

int node::getValue() const {
	return value;
}

void node::setValue(int v) {
	value = v;
}
int node::getPriority() const{
	return priority;
}
void node::setPriority(int p){
	priority = p;
}
void node::print() {
	cout << value << " ";
}

