#pragma once

#include <string>

/** A stack of strings with fixed capacity. */
class FixedCapacityStackOfStrings
{
	std::string* storage_;
	int capacity_;
	int n_;

public:

	FixedCapacityStackOfStrings(int capacity)
	{
		capacity_ = capacity;
		storage_ = new std::string[capacity];
		n_ = 0;
	}

	~FixedCapacityStackOfStrings()
	{
		delete[] storage_;
	}

	void push(std::string item)
	{
		storage_[n_++] = item;
	}

	std::string pop()
	{
		return storage_[--n_];
	}

	bool is_empty() const
	{
		return n_ == 0;
	}

	int get_size() const
	{
		return n_;
	}
};

/** A generic stack with fixed capacity. */
template<typename T>
class FixedCapacityStack
{
	T* storage_;
	int capacity_;
	int n_;

public:

	FixedCapacityStack(int capacity)
	{
		capacity_ = capacity;
		storage_ = new T[capacity];
		n_ = 0;
	}

	~FixedCapacityStack()
	{
		delete[] storage_;
	}

	void push(T item)
	{
		storage_[n_++] = item;
	}

	T pop()
	{
		return storage_[--n_];
	}

	bool is_empty() const
	{
		return n_ == 0;
	}

	int get_size() const
	{
		return n_;
	}
};

/** A generic stack with fixed capacity. */
template<typename T>
class ResizableStack
{
	T* storage_;
	int capacity_;
	int n_;

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

public:

	ResizableStack()
	{
		capacity_ = 1;
		storage_ = new T[1];
		n_ = 0;
	}

	~ResizableStack()
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

	int get_size() const
	{
		return n_;
	}
};
