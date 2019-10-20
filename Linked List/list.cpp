#include "list.h"

list::list() :head(0), count(0) {}    // Default Constructor

list::list(node*& ptr) : head(ptr), count(1) { // Parameterized Constructor
	head->next = ptr = NULL;
}
// Copy Constructor
list::list(const list& src) : count(src.count) {
	this->head = src.head;
	if (count > 0) {
		node* sptr, * dptr;
		dptr = head = new node(*src.head);
		sptr = src.head->next;
		for (int i = 1; i < count; ++i) {
			dptr->next = new node(*sptr);
			sptr = sptr->next;
			dptr = dptr->next;
		}
	}
}
// To check whether List Object is empty or not
bool list::isEmpty() const {
	if (head)
		return 0;
	else
		return 1;
}
// To get the number of nodes in List Object
int list::getCount() const {
	return count;
}
// To insert first node in List object
list& list::insert(node*& ptr) {
	ptr->next = head;
	head = ptr;
	ptr = NULL;
	++count;
	return *this;
}
// To insert node at given index
list& list::insertAt(int index, node*& ptr) {
	if (index <= 0) {

		insert(ptr);
		return *this;
	}
	if (index > count)
		index = count;

	node* rptr = head;
	for (int i = 1; i < index; ++i)
		rptr = rptr->next;
	ptr->next = rptr->next;
	rptr->next = ptr;
	ptr = NULL;
	++count;
	return *this;
}
// To delete nodes from list from the given node to the end
void list::deleteNodes(node*& ptr) {
	if (ptr) {
		deleteNodes(ptr->next);
		delete ptr;
	}
}
// To remove first node in the list
node* list::remove() {

	if (head) {
		node* ptr = head;
		head = head->next;
		ptr->next = NULL;
		--count;
		return ptr;
	}
	return NULL;
}
// To remove a node of given index
node* list::removeAt(int index) {
	if (index <= 0)
		return remove();
	if (index >= count)
		index = count - 1;
	node* rptr = head;
	for (int i = 1; i < index; ++i)
		rptr = rptr->next;
	node* ptr = rptr->next;
	rptr->next = ptr->next;
	--count;
	ptr->next = NULL;
	return ptr;
}
// To access the nodes by their indices, same as we do with arrays
node& list::operator[](int index) {
	if (index <= 0)
		return *head;
	if (index >= count)
		index = count - 1;
	node* rptr = head;
	for (int i = 0; i < index; ++i)
		rptr = rptr->next;
	return *rptr;

}
// To swap two nodes at given indices in List
list& list::swapNodesAt(int index1, int index2) {
	if (index1 < 0)   index1 = 0;  // if index1 is negative, set it to 0
	if (index2 < 0)   index2 = 0;  // if index2 is negative, set it to 0
	if (index1 >= count)   index1 = count - 1;   // if index1 is out of bound i.e exceeds count, set it to one less than count
	if (index2 >= count)   index2 = count - 1;    // if index2 is out of bound i.e exceeds count, set it to one less than count
	if (index1 == index2)   return *this;    // if both indices are same, we have no need to do anything
	// Code after condition is for swaping if index1 is less than index2
	// so if index1 is greater than index2, program will swap values of both indices
	// so index1 is always smaller than index2
	if (index1 > index2)
		swap(index1, index2);
	node* ptr = removeAt(index1);
	insertAt(index2 - 1, ptr);
	ptr = removeAt(index2);
	insertAt(index1, ptr);
	return *this;
}
// To reverse the whole list object, 
// by reversing the direction of next pointers of each node
list& list::reverse() {
	if (count < 2)
		return *this;
	node* rptr, ** ARR = new node * [count];  // created an array of node pointers, of length count
	rptr = head;
	// copying the nodes' addresses in pointer ARR
	for (int i = 0; i < count; ++i) {
		ARR[i] = rptr;
		rptr = rptr->next;
	}
	// Reversing the directions of next pointers of each node
	// e.g ARR[1]->next will point towards ARR[0]
	for (int i = 1; i < count; ++i)
		ARR[i]->next = ARR[i - 1];
	// next pointer of last node of reversed will be nullified
	ARR[0]->next = NULL;
	// now head will point to the last node that is first node of modified list
	head = ARR[count - 1];
	delete[]ARR;
	return *this;
}
// Operator+ function to concatenate two list objects
// and saving it into calling object
list& list::operator+(const list& robj) {
	if (robj.count == 0)   return *this;

	list rcopy = robj;
	if (!head) {

		head = rcopy.head;
		count = rcopy.count;
	}
	else {
		node* rptr = head;
		for (int i = 1; i < count; ++i)
			rptr = rptr->next;
		rptr->next = rcopy.head;
		count += rcopy.count;
	}
	rcopy.head = NULL;
	return *this;
}
void list::print() const // to print the stack
{
	if (!head)
		cout << " List is empty\n";
	else
	{
		node* ptr = head;
		for (int i = 0; i < count; ++i) {
			ptr->print();
			ptr = ptr->next;
		}
	}
}
// Destructor to delete all nodes in the object
list::~list() {
	deleteNodes(head);
}