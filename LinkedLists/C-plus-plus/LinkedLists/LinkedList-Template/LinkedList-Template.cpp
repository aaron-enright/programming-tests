#include <iostream>

#include "LinkedList-Template.h"

int main()
{
	SortedLinkedList<int> mylist;

	int values[4] = { 3, 7, 5, 12 };

	mylist.Insert(values, 4);

	mylist.Print();

	mylist.Remove(5);
	mylist.Print();

	mylist.Remove(3);
	mylist.Print();

	mylist.Remove(12);
	mylist.Print();

	LIFOLinkedList<const char *> myCharList;

	const char* charValues[4] = { "3", "7", "5", "12" };

	myCharList.Insert(charValues, 4);

	myCharList.Print();

	myCharList.Remove("5");
	myCharList.Print();

	myCharList.Remove("3");
	myCharList.Print();

	myCharList.Remove("12");
	myCharList.Print();

	return 0;
}
