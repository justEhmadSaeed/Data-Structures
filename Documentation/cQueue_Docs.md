# cQueue Class Reference

````c++
class cQueue:protected cStack{}
````

cQueue class is a linear data structure with FIFO(First In First Out) access order in which the `top` pointer points to the first node of a deck of multiple `cNode` class objects in which the last node is pointed to `NULL`

## Data Members

This class has the following data members:

- Private:
  - This class has no private data members
- Protected:
  - `cNode *tail` : Pointer stores the reference to the last node to be added to the cQueue object
- Public:
  - This class has no public data members

## Methods

This class has the following methods:

- Private:
  - This class has no private methods
- Public:
  - `cQueue()` : Default constructor, sets `tail` to `NULL` and sends a call to the `cStack` class default constructor
  - `cQueue(cNode* &ptr)` : Single parameterized constructor, accepts a single pointer `ptr` to the latest node to be added to the deck, sets `tail` to `ptr` and sends a call to the single parameterized constructor
  - `cQueue(const cQueue &src)` : Copy constructor, performs a deep copy of all the nodes of the `src` object to the calling object
  - `cQueue& operator=(const cQueue &src)` : Assignment operator, deletes all the members of the calling object and then deep copies the nodes of `src` into the calling object
  - `cQueue& add(cNode* &ptr)` : Adds a new node to the end of the deck, accepts a pointer `ptr` to the new node and then returns the reference to the calling object for cascadibility
  - `~cQueue()` : Destructor, deletes all the object in the deck of the calling object
  - `cNode* remove()` : Removes the first node in the deck, returns the pointer to that node
  - `bool isEmpty()` : Precondition, returns `true` if the deck of the calling object is empty, returns `false` otherwise
  - `void print()` : For debugging purposes, calls the `print` method on the `cStack` parent class
