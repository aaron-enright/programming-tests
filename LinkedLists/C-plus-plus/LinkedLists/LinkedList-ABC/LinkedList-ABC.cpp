#include <iostream>

#include "LinkedList-ABC.h"

class ReversedLinkedList : public AbstractLinkedList
{
public:
	virtual void Insert(int value)
	{
		Node* newList = new Node(value);
		newList->next = this->head;
		head = newList;
	}

	virtual void Insert(int* value, int nvalues)
	{
		AbstractLinkedList::Insert(value, nvalues);
	}
};

int main()
{
	ReversedLinkedList mylist;

	int values[4] = { 3, 7, 5, 12 };

	mylist.Insert(values, 4);

	mylist.Print();

	mylist.Remove(5);
	mylist.Print();

	mylist.Remove(3);
	mylist.Print();

	mylist.Remove(12);
	mylist.Print();

	return 0;
}
