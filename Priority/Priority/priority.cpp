#include "priority.h"

// Default Constructor to call default constructor of Cqueue
priority::priority():queue() {}

// one parameterized Constructor
priority::priority(node *&ptr) : queue(ptr) {
}

// add function to insert node according to its priority
priority &priority::add(node *&ptr){

    if (!top){

        top = tail = ptr;
        tail->next = ptr = NULL;

    } else if (top->getPriority() < ptr->getPriority()){
        stack::push(ptr); 

    } else if (tail->getPriority() >= ptr->getPriority()){
        queue::add(ptr);

    } else{
        node *rptr = top;
        while ((rptr->next)->getPriority() >= ptr->getPriority())
            rptr = rptr->next;

        ptr->next = rptr->next;
        rptr->next = ptr;
        ptr = NULL;
    }
    return *this;
}

// Copy Constructor Overloading
priority::priority(priority &src) : queue((queue &)src) {}

// Assignment operator overloading
priority &priority::operator=(const priority &src){
    ((queue *)this)->operator=((queue &)src);
	return *this;
}

// to print all nodes
void priority::print()const {
	queue::print();
}

// to check whether PriorityQueue is empty or not
bool priority::isEmpty() {
	return stack::isEmpty();
}