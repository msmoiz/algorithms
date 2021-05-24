// Write a method lg() that takes an int value n as argument
// and returns the largest int not larger than the base2 log of n.

#include <iostream>

int lg(int val)
{
	auto pow = [](int base, int exp) -> int
	{
		if (exp == 0)
		{
			return base;
		}

		else
		{
			int ret = base;
			for (int i = 1; i < exp; ++i)
			{
				ret *= base;
			}
			return ret;
		}
	};
	
	// find the log base2 of val
	int exp = 0;
	while (pow(2, exp + 1) <= val)
	{
		++exp;
	}

	return exp;
}

int main()
{
	std::cout << lg(63) << std::endl;
}
