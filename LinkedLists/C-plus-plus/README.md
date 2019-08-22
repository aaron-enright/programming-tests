# C++ Version

This is probably the most "native" version of this programming test and the first one I wrote.  It may be evident from the first version of the code (LinkedList-Original.cpp), that this test originated in
C.  I didn't change it from there, because I thought it was a much better exercise to start with "really bad" code (well, completely non-object-oriented code), to see how well the candidate could read code
in a format that they weren't used to, as well as see how they approached the problem of "objectifying" the code.  There is a lot more that could be done with the code than outlined here - those are your
"talking points".  The code I give in the "example" answers is arguably flawed, but these flaws should catch a good candidates eye.  Some of the reason for this is because the code is easier to present
(e.g. everything in the .cpp file instead of .h and .cpp), and in other cases because literally I do want to hear a candidates opinions on what they see wrong.

Lastly, the sample answers are given in Visual C++ for Visual Studio 2019.  This usually will not matter, but in some cases (especially for question 10), allow for differences and/or easier coding in g++ or
other C++ compilers.

![LinkedList-Original.cpp](LinkedList-Original.png)

[Complete Listing Here](LinkedLists/LinkedList-Original/LinkedList-Original.cpp)

Questions:

1. What is the output of this program?
2. Is is necessary to create a temp value in PrintList (that is, is it a bug as written)?  If not, why?
3. Create an overload for Insert that allows the caller to insert multiple values in one call.
4. Create a function for removing the first occurrence of a value from the list.
5. Re-write Insert to place value at the end of the list.
6. Refactor the code to be object-oriented.
7. Turn the code into an abstract base class with an implementation called ReverseList that prints in the original (that is, original version of the code) order.
8. Derive a new class called SortedList that will insert values in a sorted order.
9. Derive a new class called List the inserts in FIFO order.
10. Create a template class that allows values of ANY type.

For questions 1 & 2, we present these on the white-board or on paper - use of a compiler will "figure it out" for the candidate.  Each subsequent question we give to the candidate with a compiler on
an off-line laptop (if available), then time each response (10 minutes would be max).  My personal preferred way to interview is to leave the candidate to code for 10 minutes for each answer then return
and discuss their solution with them.  The off-line (that is, not connected to the internet) is important - you'd be amazed how many candidates can either find the solutions on-line or call their friends
for help (no cell phone also applies if you want an honest test).

Sample Answers:

1. 12 5 7 3
2. No.  This is bad style, but in C/C++, passing by value creates a temporary variable on the stack which can be used like any other variable, but is lost as soon as the stack frame is destroyed (just
like local variables).
3. [LinkedList MultiInsert](LinkedLists/LinkedList-MultiInsert/LinkedList-MultiInsert.cpp)
4. [LinkedList Remove](LinkedLists/LinkedList-Remove/LinkedList-Remove.cpp)
5. [LinkedList InsertAtEnd](LinkedLists/LinkedList-InsertAtEnd/LinkedList-InsertAtEnd.cpp)
6. [LinkedList Class](LinkedLists/LinkedList-Class/LinkedList-Class.cpp)
7. [LinkedList ABC (header)](LinkedLists/LinkedList-ABC/LinkedList-ABC.h)
   [LinkedList ABC (cpp)](LinkedLists/LinkedList-ABC/LinkedList-ABC.cpp)
8. [LinkedList Sorted](LinkedLists/LinkedList-Sorted/LinkedList-Sorted.cpp)
9. [LinkedList FIFO](LinkedLists/LinkedList-FIFO/LinkedList-FIFO.cpp)
10. [LinkedList Template (header)](LinkedLists/LinkedList-Template/LinkedList-Template.h)
    [LinkedList Template (cpp)](LinkedLists/LinkedList-Template/LinkedList-Template.cpp)


