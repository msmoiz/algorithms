// Write a method histogram() that takes an array a[] of int values
// and an integer m as arguments and returns an array of length m
// whose ith entry is the number of times the integer i appeared
// in the argument array. If the values in a[] are all between
// 0 and m-1, the sum of the values in the return array should be
// equal to a.length.

#include <vector>

std::vector<int> histogram(std::vector<int> a, int m)
{
	std::vector<int> out;
	out.reserve(m);
	
	for (int i = 0; i < m; ++i)
	{
		int count = 0;
		for (int j = 0; j < 100; ++j)
		{
			if (a[j] > m)
			{
				continue;
			}
			
			if (a[j] == i)
			{
				++count;
			}
		}
		out[i] = count;
	}

	return out;
}
