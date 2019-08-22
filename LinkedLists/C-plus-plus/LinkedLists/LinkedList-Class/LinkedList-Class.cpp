#include <iostream>

class AbstractLinkedList
{
	struct Node
	{
		int value;
		Node* next;
		Node(int value)
		{
			this->value = value;
			this->next = NULL;
		}

	private:
		Node() {};
	};

	Node* head;

public:
	AbstractLinkedList()
	{
		this->head = NULL;
	}

	void Print()
	{
		Node* list = this->head;
		while (list != NULL)
		{
			std::cout << list->value << " ";
			list = list->next;
		}

		std::cout << "\n";
	}

	void Insert(int value)
	{
		Node* newList = new Node(value);
		newList->next = this->head;
		head = newList;
	}

	void Insert(int* value, int nvalues)
	{
		for (int i = 0; i < nvalues; i++)
		{
			this->Insert(value[i]);
		}
	}

	void Remove(int value)
	{
		if (head == NULL)
		{
			return;
		}

		if (head->value == value)
		{
			Node* temp = head;
			head = head->next;
			return;
		}

		Node* trailer = head;
		Node* current = head->next;

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
	}
};

int main()
{
	AbstractLinkedList mylist;

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
