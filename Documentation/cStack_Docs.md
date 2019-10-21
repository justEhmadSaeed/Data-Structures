# cStack Class Reference

````c++
class cStack{}
````

cStack class a linear data structure with LIFO(Last In First Out) access order in which the `top` pointer points to a deck of multiple `cNode` class objects in which the last node is pointed to NULL.

## Data Members

This class has the following data members:

- Private:
  - This class has no private data members
- Protected:
  - `cNode *top` : Holds the reference to the first node of the stack
- Public:
  - This class has no public data members

## Methods

This class has the following members:

- Private:
  - This class has no private data members
- Public:
  - `cStack()` : Default constuctor, sets `top` to `NULL`
  - `cStack(cNode* &ptr)` : Single parameterized constructor, takes a pointer to a `cNode` class object and assigns its value to `top`
  - `cStack(const cStack &src)` : Copy Constructor, makes a deep copy of the `src` stack to the calling stack object
  - `cStack& operator=(const cStack &src)` : Assignment Operator, cleans the calling stack object, then deep copies the `src` stack into the calling stack object, returns the calling stack object by reference
  - `cStack& push(cNode* &ptr)` : Takes in a `cNode` pointer by reference and adds its object to the top of the stack's deck
  - `~cStack()` : Destructor, deletes all the nodes in the calling object's deck
  - `cNode* pop()` : Deletes the top node of the calling stack's deck and returns its pointer
  - `bool isEmpty() const` : Precondition, returns `true` if the calling stack's deck is empty, returns `false` otherwise
  - `void print() const` : For debugging purposes, prints all the nodes of the calling stack's deck one by one
  