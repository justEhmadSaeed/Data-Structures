# cNode Class Reference

````c++
class cNode{}
````

cNode class is a basic self referential class which holds an integer value and a reference to a pointer of the next cNode.

## Data Members

This class has the following data members:

- Private:
  - `int data` : Holds an integer value
  - `int priority` : Holds an integer value. Higher value means higher priority
- Public:
  - `cNode *next` : Holds the reference to the next node. Is NULL if there is no next node

## Methods

This class has the following methods:

- Private:
  - This class has no Private methods
- Public:
  - `cNode()` : Default constructor, sets `data` to `0` and `priority` to `0`
  - `cNode(int value)` : Single Parameterized constructor, sets `data` to `value` and `priority` to `0`
  <!-- ! Make changes in cNode class to set priority to 0 -->
  <!-- TODO: Change the name of the argument so there is no confusion between data and data  -->
  - `cNode(int value, int priority)` : Multiple Parameterized constructor, sets `data` to `data` and `priority` to `priority`
  - `cNode& setData(int value)` : Setter method for `data`, returns a reference to self object for cascading support
  - `cNode& getPriority(int priority)` : Setter method for `priority`, returns a reference to self object for cascading support
  - `int getData() const` : Getter method for `data`, returns an integer value of `data`
  - `int getPriority() const` : Getter method for `priority`, returns an integer value of `priority`
  - `void print()` : Prints the value of data
  <!-- TODO: Make the print function more robust -->

  <!-- TODO: add examples -->