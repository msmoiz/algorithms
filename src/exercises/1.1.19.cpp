
#include <iostream>
#include <cstdint>
#include <vector>

using u64 = uint64_t;

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}

u64 better_fibonacci(int n, const std::vector<u64>& precomputed)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	
	return precomputed[n - 2] + precomputed[n - 1];
}

int main()
{
	// This takes forever
	//for (int n = 0; n < 90; ++n)
	//{
	//	std::cout << n << ": " << fibonacci(n) << std::endl;
	//}

	// This is much faster
	std::vector<u64> precomputed;
	for (int n = 0; n < 90; ++n)
	{
		precomputed.push_back(better_fibonacci(n, precomputed));
		std::cout << n << ": " << precomputed.back() << std::endl;
	}
}
