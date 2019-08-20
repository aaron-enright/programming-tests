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

int main()
{
	LinkedList mylist = NULL;

	mylist = Insert(mylist, 3);
	mylist = Insert(mylist, 7);
	mylist = Insert(mylist, 5);
	mylist = Insert(mylist, 12);

	PrintList(mylist);

	return 0;
}
