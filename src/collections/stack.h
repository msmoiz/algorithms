#pragma once

#include "list.h"

/**
 * A stack is a generic container
 * that supports adding and removing elements
 * from the top of the stack. It follows a
 * last-in, first-out policy.
 * Iteration starts at the top of the stack.
 */
template<typename T>
class Stack
{
	T* storage_;
	int capacity_;
	int n_;

	friend class Iterator;

private:
	
	void resize(int capacity)
	{
		T* temp = new T[capacity];
		for (int i = 0; i < n_; ++i)
		{
			temp[i] = storage_[i];
		}
		delete[] storage_;
		storage_ = temp;
		capacity_ = capacity;
	}

	class Iterator
	{
		Stack* stack_;
		int n_;
		
	public:

		Iterator()
			: stack_(nullptr)
			, n_(-1)
		{
			
		}
		
		Iterator(Stack* stack)
			: stack_(stack)
			, n_(stack->capacity_ - 1)
		{
			
		}

		void operator++()
		{
			--n_;
		}

		bool operator!=(const Iterator& Other)
		{
			return n_ != Other.n_;
		}

		T& operator*()
		{
			return stack_->storage_[n_];
		}
	};

public:

	Stack()
	{
		capacity_ = 1;
		storage_ = new T[1];
		n_ = 0;
	}

	~Stack()
	{
		delete[] storage_;
	}

	void push(T item)
	{
		if (n_ == capacity_)
		{
			resize(capacity_ * 2);
		}
		storage_[n_++] = item;
	}

	T pop()
	{
		T item = storage_[--n_];
		if (n_ > 0 && n_ == capacity_ / 4)
		{
			resize(capacity_ / 2);
		}
		return item;
	}

	bool is_empty() const
	{
		return n_ == 0;
	}

	int size() const
	{
		return n_;
	}

	Iterator begin()
	{
		return Iterator(this);
	}

	Iterator end()
	{
		return Iterator();
	}
};

/**
 * A stack is a generic container
 * that supports adding and removing elements
 * from the top of the stack. It follows a
 * last-in, first-out policy.
 * Iteration starts at the top of the stack.
 * Implemented as a singly linked list.
 */
template<typename T>
class ListStack
{
	Node<T>* first_;
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

	ListStack()
		: first_(nullptr)
		, n_(0)
	{
		
	}

	~ListStack()
	{
		for (Node<T>* node = first_; node != nullptr;)
		{
			Node<T>* temp = node;
			node = node->next_;
			delete temp;
		}
	}

	void push(T item)
	{
		Node<T>* temp = new Node<T>(item);
		temp->next_ = first_;
		first_ = temp;
		++n_;
	}

	T pop()
	{
		T item = first_->item_;
		Node<T>* temp = first_;
		first_ = first_->next_;
		delete temp;
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
