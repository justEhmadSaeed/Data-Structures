#include "priority.h"

priority::priority() {}

priority::priority(node *&ptr) : queue(ptr) {
}

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
priority::priority(priority &src) : queue((queue &)src) {}

priority &priority::operator=(const priority &src){
    ((queue *)this)->operator=((queue &)src);
	return *this;
}
void priority::print()const {
	queue::print();
}
bool priority::isEmpty() {	// check whether Priority Queue is empty or not
	return stack::isEmpty();
}