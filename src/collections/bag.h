#pragma once

/**
 * A bag is a generic container that supports adding
 * items to it but does not support removing items from it.
 */
template<typename T>
class Bag
{
	T* storage_;
	int capacity_;
	int count_;
	
public:

	Bag()
	{
		storage_ = new T[1];
		capacity_ = 1;
		count_ = 0;
	}

	~Bag()
	{
		delete[] storage_;
	}
	
	/** Add an item to the bag. */
	void add(T item)
	{
		// If capacity reached, double it
		if (count_ == capacity_)
		{
			T* temp = new T[capacity_ * 2];
			for (int i = 0; i < capacity_; ++i)
			{
				temp[i] = storage_[i];
			}

			delete[] storage_;
			storage_ = temp;

			capacity_ *= 2;
		}

		// Insert item
		storage_[count_++] = item;
	}

	/** Returns true if the bag contains no items. */
	bool is_empty() const
	{
		return count_ == 0;
	}
	
	/** Get the number of items in the bag. */
	int size()
	{
		return count_;
	}

	/** Start iterator. */
	T* begin()
	{
		return &storage_[0];
	}

	/** End iterator. */
	T* end()
	{
		return &storage_[count_];
	}
};
