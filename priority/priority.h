#include "queue.h"
#include <iostream>
using namespace std;
class priority: public queue
{
private:
    
public:
    priority();
    priority(node* &ptr);
    priority& add(node* &ptr);
    priority(priority &src);    // Copy Constructor
    priority& operator=(const priority &src);
};

