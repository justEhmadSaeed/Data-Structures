# List Class Reference

````c++
class List{}
````

List class is a linear data structure made of a deck of `cNode` class objects. A `top` pointer holds the reference to the first object in the deck and the last object points to `NULL`.

## Data Members

This class has the following data members:

- Private:
  - `cNode *top` : Pointer to a first node in the deck
  - `int Count` : Integer value that represents how many nodes are currently in the deck
- Public:
  - This class has no public data members

## Methods

This class has the following methods:

- Public:
  - `List()` : Default constructor, sets the `top` to `NULL` and `Count` to `0`
  - `List(cNode* &ptr)` : Single parameterized constructor, sets the `top` to `ptr` and `Count` to `1`
  - `List(const List &src)` : Copy constructor, deep copies all the nodes of the `src` object into the calling object
  - `List& operator=(const List &src)` : Assignment operator overload, deletes all the nodes of the calling object and then deep copies the nodes of the `src` object into the calling object
  - `List& Insert(cNode* &ptr)` : Inserts the node as the first node into the deck of the calling object,  returns the reference to self for cascadibility
  - `List& Insert_At(int Index, cNode* &ptr)` : Takes in a node as a input and inserts it at a specific index in the deck of the calling object, returns the reference to self for cascadibility
  - `cNode* remove()` : Removes the first node in the deck of the calling object and returns its pointer to call point
  - `cNode* Remove_At()` : Removes the node at a specific index in the deck of the object and returns its pointer
  - `cNode& operator[](int Index)` : Takes in an integer value and returns the node at that index, if the index is out of bounds then it maps then into the range of the number of nodes
  - `int Get_Count() const` : For Debugging, returns the count of the calling object
  - `bool isEmpty() const` : Precondition, returns `true` if the deck of the calling object is empty and returns `false` otherwise
  - `bool Is_Similar(List &src) const` : Takes in a `src` list and returns true if the `Count` and all the nodes of both the `src` and `this` are same, returns `false` otherwise
  - `void print() const` : For Debugging purposes, prints all the nodes of the linked list
