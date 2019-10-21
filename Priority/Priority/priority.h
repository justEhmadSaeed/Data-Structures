#include "queue.h"
#include <iostream>
using namespace std;
class priority: public queue
{
private:
    
public:
    priority();     // Default Constructor
    priority(node* &ptr);   // one parameterized Constructor
    priority& add(node* &ptr);  // add function to insert node according to its priority
    priority(priority &src);    // Copy Constructor Overloading
    priority& operator=(const priority &src);   // Assignment operator overloading
	void print()const;      // to print all nodes
	bool isEmpty();     // to check whether PriorityQueue is empty or not
};

