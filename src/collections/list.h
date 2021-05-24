#pragma once

template<typename T>
struct Node
{
	Node()
		: next_(nullptr)
	{
		
	}

	Node(T item)
		: item_(item)
		, next_(nullptr)
	{
		
	}
	
	T item_;
	Node* next_;
};
