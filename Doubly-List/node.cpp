#include "node.h"
node::node() :data(0) {}

node::node(int d) : data(0) {

}
void node::setData(int d) {
	data = d;
}
int node::getData() {
	return data;
}
void node::print()const {
	cout << "Node Data: " << data;
}