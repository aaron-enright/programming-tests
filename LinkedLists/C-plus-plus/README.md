# C++ Version

This is probably the most "native" version of this programming test and the first one I wrote.  It may be evident from the first version of the code (LinkedList-Original.cpp), that this test originated in
C.  I didn't change it from there, because I thought it was a much better exercise to start with "really bad" code (well, completely non-object-oriented code), to see how well the candidate could read code
in a format that they weren't used to, as well as see how they approached the problem of "objectifying" the code.

The programming test starts with a piece of old code that is really just C, not C++:

![LinkedList-Original.cpp](LinkedList-Original.png)

[Complete Listing Here](LinkedLists/LinkedList-Original/LinkedList-Original.cpp)

We present this code either on a white-board or in a printout, then ask the following questions:

1. What is the output of this program?
2. Is is necessary to create a temp value in PrintList (that is, is it a bug as written)?  If not, why?
3. Create an overload for Insert that allows the caller to insert multiple values in one call.
4. Create a function for removing the first occurrence of a value from the list.
5. Re-write Insert to place value at the end of the list.
6. Refactor the code to be object-oriented.
7. Turn the code into an abstract base class with an implementation called ReverseList that prints in the original order.
8. Derive a new class called SortedList that will insert values in a sorted order.
9. Derive a new class called List the inserts in FIFO order.
10. Create a template class that allows values of ANY type.

Answers:

1. 12 5 7 3
2. No.  This is bad style, but in C/C++, passing by value creates a temporary variable on the stack which can be used like any other variable, but is lost as soon as the stack frame is destroyed (just
like local variables).
3. [LinkedList MultiInsert](LinkedLists/LinkedList-MultiInsert/LinkedList-MultiInsert.cpp)
4. [LinkedList Remove](LinkedLists/LinkedList-Remove/LinkedList-Remove.cpp)
5. [LinkedList InsertAtEnd](LinkedLists/LinkedList-InsertAtEnd/LinkedList-InsertAtEnd.cpp)