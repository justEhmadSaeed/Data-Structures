#include "stack.h"

stack::stack() : top(NULL) {}

// One node insertion constructor
stack::stack(node*& ptr) : top(ptr)
{
	top->next = 0;
	ptr = NULL;
}

stack::stack(const stack& src) // copy constructor
{
	this->top = src.top;
	if (src.top)
	{
		node* sptr, * dptr;
		dptr = top = new node(*src.top);
		sptr = src.top->next;

		while (sptr)
		{
			dptr->next = new node(*sptr);
			sptr = sptr->next;
			dptr = dptr->next;
		}
	}
}
stack& stack::operator=(const stack& robj) // Assignment Operator overloading
{
	if (this == &robj)
		return *this;
	if (true)
	{
		stack temp;
		temp.top = top;
	}
	if (true)
	{
		stack temp = robj;
		top = temp.top;
		temp.top = NULL;
		return *this;
	}
}
// cascaded push function to add a new node
stack& stack::push(node*& ptr)
{
	ptr->next = top;
	top = ptr;
	ptr = NULL;
	return *this;
}
// to pop a node out of stack
node* stack::pop() 
{
	if (!isEmpty())
	{
		node* ptr = top;
		top = top->next;
		ptr->next = NULL;
		return ptr;
	}
	else
	{
		cout << "\n Stack is Empty" << endl;
		return 0;
	}
}
void stack::print() const // to print the stack
{
	if (!top)
		cout << " Stack is empty\n";
	else
	{
		node* ptr = top;
		while (ptr)
		{
			ptr->print();
			ptr = ptr->next;
		}
	}
}
bool stack::isEmpty() // check whether stack is empty or not
{
	if (top)
		return 0;
	else
		return 1;
}
//Destructor to delete the whole stack explicitly
stack::~stack() {
	node* ptr = top;
	while (ptr) {
		ptr = ptr->next;
		delete top;
		top = ptr;
	}
}