// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct _link
{
	int value;
	_link* next;
};

typedef _link* LinkedList;

LinkedList CreateNode(int value)
{
	LinkedList newNode = (LinkedList)malloc(sizeof(_link));
	newNode->value = value;
	newNode->next = NULL;

	return newNode;
};

void PrintList(LinkedList list)
{
	while (list != NULL)
	{
		std::cout << list->value << " ";
		list = list->next;
	}

	std::cout << "\n";
}

LinkedList Insert(LinkedList list, int value)
{
	LinkedList newList = CreateNode(value);
	newList->next = list;

	return newList;
}

LinkedList Insert(LinkedList list, int* value, int nvalues)
{
	for (int i = 0; i < nvalues; i++)
	{
		LinkedList newList = CreateNode(value[i]);
		newList->next = list;
		list = newList;
	}

	return list;
}

LinkedList Remove(LinkedList list, int value)
{
	if (list == NULL)
	{
		return NULL;
	}

	if (list->value == value)
	{
		return list->next;
	}

	LinkedList trailer = list;
	LinkedList current = list->next;

	while (current != NULL)
	{
		if (current->value == value)
		{
			trailer->next = current->next;
			delete current;
			current = NULL;
		}
		else
		{
			trailer = current;
			current = current->next;
		}
	}

	return list;
}

int main()
{
	LinkedList mylist = NULL;

	int values[4] = { 3, 7, 5, 12 };

	mylist = Insert(mylist, values, 4);

	PrintList(mylist);

	mylist = Remove(mylist, 5);
	PrintList(mylist);

	mylist = Remove(mylist, 3);
	PrintList(mylist);

	mylist = Remove(mylist, 12);
	PrintList(mylist);

	return 0;
}
