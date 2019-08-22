#pragma once

#include <iostream>

class AbstractLinkedList
{
protected:
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

	virtual void Print()
	{
		Node* list = this->head;
		while (list != NULL)
		{
			std::cout << list->value << " ";
			list = list->next;
		}

		std::cout << "\n";
	}

	virtual void Insert(int value) = 0;

	virtual void Insert(int* value, int nvalues)
	{
		for (int i = 0; i < nvalues; i++)
		{
			this->Insert(value[i]);
		}
	}

	virtual void Remove(int value)
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

