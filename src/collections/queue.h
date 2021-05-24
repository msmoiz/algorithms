#pragma once

#include "list.h"

/**
 * A queue is a generic container that supports adding
 * and removing items. The queue operates on a
 * first-in, first-out policy.
 * Implemented as a singly linked list.
 */
template<typename T>
class Queue
{
	Node<T>* first_;
	Node<T>* last_;
	int n_;

private:

	class Iterator
	{
		Node<T>* current_;
		
	public:

		Iterator()
			: current_(nullptr)
		{
			
		}
		
		Iterator(Node<T>* first)
			: current_(first)
		{
			
		}

		void operator++()
		{
			current_ = current_->next_;
		}

		bool operator!=(const Iterator& Other)
		{
			return current_ != Other.current_;
		}

		T& operator*()
		{
			return current_->item_;
		}
	};

public:

	Queue()
		: first_(nullptr)
		, last_(nullptr)
		, n_(0)
	{
		
	}

	~Queue()
	{
		for (Node<T>* node = first_; node != nullptr;)
		{
			Node<T>* temp = node;
			node = node->next_;
			delete temp;
		}
	}

	void enqueue(T item)
	{
		Node<T>* old_last = last_;
		last_ = new Node<T>(item);

		if (old_last)
		{
			old_last->next_ = last_;
		}

		else
		{
			first_ = last_;
		}
		
		++n_;
	}

	T dequeue()
	{
		T item = first_->item_;
		Node<T>* old_first = first_;
		first_ = first_->next_;
		if (last_ == old_first)
		{
			last_ = first_;
		}
		delete old_first;
		--n_;
		return item;
	}

	bool is_empty() const
	{
		return first_ == nullptr;
	}

	int size() const
	{
		return n_;
	}

	Iterator begin()
	{
		return Iterator(first_);
	}

	Iterator end()
	{
		return Iterator();
	}
};

