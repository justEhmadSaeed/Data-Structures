#include "queue.h"

// Default Constructor
queue::queue() : tail(NULL) {};

// Parameterized Constructor
queue::queue(node* &ptr): stack(ptr){
	tail = top;
}
// Copy Constructor
queue::queue(const queue& src)
{
	this->top = src.top;
	this->tail = src.tail;
	if (src.top)
	{
		node* sptr;
		top = tail = new node(*src.top);
		sptr = src.top->next;
		while (sptr)
		{
			tail->next = new node(*sptr);
			tail = tail->next;
			sptr = sptr->next;
		}
	}
}
// Copy Constructor to handle the empty case
// queue::queue (const queue & src) : stack((stack &)src) {
// 	tail = top; 
// 	while (tail) {
// 		if (!tail->next) {
// 			break;
// 		}
// 		tail = tail->next;
// 	}
// }

// To remove the top node 
node* queue::remove() {
	if (!top->next)
		tail = NULL;
	return stack::pop();
}
// To push the node at tail
queue& queue::add(node*& ptr)
{
	if (tail) {
		tail->next = ptr;
		tail = tail->next;
	}
	else {
		tail = top = ptr;
	}
	tail->next = NULL;
	ptr = NULL;

	return *this;
}
// To print all nodes in the Queue
void queue::print()const {
	stack::print();
}
bool queue::isEmpty() {	// check whether queue is empty or not
	return stack::isEmpty();
}