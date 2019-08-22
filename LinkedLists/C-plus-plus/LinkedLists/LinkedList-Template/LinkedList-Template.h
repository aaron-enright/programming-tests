#pragma once

#include <iostream>

template <typename T> class AbstractLinkedList
{
protected:
	struct Node
	{
		T value;
		Node* next;
		Node(T value)
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

	virtual void Insert(T value) = 0;

	virtual void Insert(T* value, int nvalues)
	{
		for (int i = 0; i < nvalues; i++)
		{
			this->Insert(value[i]);
		}
	}

	virtual void Remove(T value)
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

template <typename T> class SortedLinkedList : public AbstractLinkedList <T>
{
public:
	virtual void Insert(T value)
	{
		struct AbstractLinkedList<T>::Node* newNode = new struct AbstractLinkedList<T>::Node(value);

		if (this->head == NULL || this->head->value >= value)
		{
			newNode->next = this->head;
			this->head = newNode;

			return;
		}

		struct AbstractLinkedList<T>::Node* trailer = this->head;
		struct AbstractLinkedList<T>::Node* current = this->head->next;

		while (current != NULL && current->value < value)
		{
			trailer = current;
			current = current->next;
		}
		newNode->next = current;
		trailer->next = newNode;
	}

	virtual void Insert(T* value, int nvalues)
	{
		AbstractLinkedList<T>::Insert(value, nvalues);
	}
};

template <typename T> class LIFOLinkedList : public AbstractLinkedList <T>
{
public:
	virtual void Insert(T value)
	{
		struct AbstractLinkedList<T>::Node* newNode = new struct AbstractLinkedList<T>::Node(value);

		newNode->next = this->head;
		this->head = newNode;
	}

	virtual void Insert(T* value, int nvalues)
	{
		AbstractLinkedList<T>::Insert(value, nvalues);
	}
};

