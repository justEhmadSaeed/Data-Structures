#include "stack.h"

// Default Constructor
stack::stack() : top(NULL), count(0) {}

// One node insertion constructor
stack::stack(node*& ptr) : top(ptr), count(1)
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
	count = src.count;
}
// Constructor to input	stack from a file
stack::stack(ifstream& inFile) : top(NULL), count(0)
{
	inFile.read((char*)& this->count, sizeof(count));

	if (count > 0)
	{
		node* ptr;
		ptr = top = new node(inFile);

		for (int i = 1; i < count; ++i)
		{
			ptr->next = new node(inFile);
			ptr = ptr->next;
		}

		ptr->next = NULL;
	}
}

void stack::writeToFile(ofstream& oFile)
{
	if (!oFile.is_open())
	{
		cerr << "\n stack::writeToFile:File is not open!";
		exit(1);
	}

	oFile.write((char*)& count, sizeof(count));

	if (count > 0)
	{
		node* ptr = top;

		for (int i = 0; i < count; ++i)
		{
			ptr->writeNodeToFile(oFile);
			ptr = ptr->next;
		}
	}
}

stack& stack::readFromFile(ifstream& iFile)
{
	if (!iFile.is_open())
	{
		cerr << "\n stack::readFromFile():File is not open!";
		exit(1);
	}

	if (true)
	{
		stack temp;
		temp.top = this->top;
	}

	iFile.read((char*)& count, sizeof(count));

	top = NULL;

	if (count > 0)
	{
		node* ptr;
		ptr = top = new node(iFile);

		for (int i = 1; i < count; ++i)
		{
			ptr->next = new node(iFile);
			ptr = ptr->next;
		}

		ptr->next = NULL;
	}
	return *this;
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
		count = robj.count;
		return *this;
	}
}
// cascaded push function to add a new node
stack& stack::push(node*& ptr)
{
	ptr->next = top;
	top = ptr;
	ptr = NULL;
	count++;
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
		count--;
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
stack::~stack()
{
	node* ptr = top;
	while (ptr)
	{
		ptr = ptr->next;
		delete top;
		top = ptr;
	}
	count = 0;
}