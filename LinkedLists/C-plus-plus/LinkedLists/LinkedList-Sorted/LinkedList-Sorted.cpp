#include <iostream>

#include "LinkedList-ABC.h"

class SortedLinkedList : public AbstractLinkedList
{
public:
	virtual void Insert(int value)
	{
		Node* newNode = new Node(value);

		if (head == NULL || head->value >= value)
		{
			newNode->next = this->head;
			head = newNode;

			return;
		}

		Node* trailer = head;
		Node* current = head->next;

		while (current != NULL && current->value < value)
		{
			trailer = current;
			current = current->next;
		}
		newNode->next = current;
		trailer->next = newNode;
	}

	virtual void Insert(int* value, int nvalues)
	{
		AbstractLinkedList::Insert(value, nvalues);
	}
};

int main()
{
	SortedLinkedList mylist;

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
