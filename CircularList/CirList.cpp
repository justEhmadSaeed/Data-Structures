#include "CirList.h"

CirList::CirList() :head(NULL), count(0) {}

CirList::CirList(node* ptr) : head(ptr), count(1) {
	head->next = head;
	ptr = NULL;
}
CirList::CirList(const CirList& src) : head(src.head), count(src.count) {
	if (src.head) {
		node* dptr, * sptr;
		dptr = head = new node(*src.head);
		sptr = src.head->next;
		for (int i = 1; i < count; i++) {
			dptr->next = new node(*sptr);
			sptr = sptr->next;
			dptr = dptr->next;
		}
		dptr->next = head;
	}
}
// Insert Node after head
CirList& CirList::insert(node*& ptr) {
	if (head) {
		ptr->next = head->next;
		head->next = ptr;
	}
	// if head is not present, then provided node becomes HEAD
	else {
		head = ptr;
		head->next = head;
	}
	++count;
	ptr = NULL;
	return *this;
}
// Insert Node at given index
CirList& CirList::insertAt(int index, node*& ptr) {

	if (index <= 0 || count < 1)
		return insert(ptr);

	if (index >= count) {
		ptr->next = head->next;
		head->next = ptr;
		head = ptr;
		ptr = NULL;
		count++;
		return *this;
	}

	node* rptr = head->next;
	for (int i = 1; i < index; ++i)
		rptr = rptr->next;
	ptr->next = rptr->next;
	rptr->next = ptr;
	ptr = NULL;
	count++;
	return *this;
}
// Remove node after head
node* CirList::remove() {

	if (head) {
		node* ptr = head->next;
		if (count > 1)
			head->next = ptr->next;

		else
			head = NULL;

		ptr->next = NULL;
		--count;
		return ptr;
	}
	return NULL;
}
// Remove Node at given Index
node* CirList::removeAt(int index) {

	if (index <= 0 || count <= 1)
		return remove();

	if (index >= count)
		index = count - 1;

	node* rptr = head->next;
	for (int i = 1; i < index; ++i)
		rptr = rptr->next;

	node* ptr = rptr->next;
	rptr->next = ptr->next;
	ptr->next = NULL;
	if (index = count - 1)
		head = rptr;

	--count;
	return ptr;
}
// Assignment Operator
CirList& CirList::operator=(const CirList& src) {

	if (this == &src)
		return *this;

	if (true) {
		CirList temp;
		temp.head = head;
		temp.count = count;
	}

	if (true) {
		CirList temp = src;
		head = temp.head;
		count = temp.count;
		temp.head = 0;
		temp.count = 0;
		temp = NULL;
	}
	return *this;
}
// Swaping Nodes of index 1 & index 2
CirList& CirList::Swaping(int index1, int index2) {
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
// Flipping the Nodes of Circular List
CirList& CirList::flip() {

}
// Print all Nodes in Circular List
void CirList::print()const {

	if (count == 0)
		cout << "\n List is empty\n";

	else {
		node* ptr = head->next;
		cout << "\n Elements in List: ";
		for (int i = 0; i < count; ++i) {
			cout << ptr->getValue() << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}
}
// Destructor
CirList::~CirList() {
	node* ptr;
	for (int i = 0; i < count; ++i) {
		ptr = remove();
		delete ptr;
	}
}