// Give the value of the following function
// Prints: 311361142246

#include <iostream>
#include <string>
#include <sstream>

std::stringstream exR1(int n)
{
	if (n <= 0)
	{
		return std::stringstream();
	}

	return exR1(n - 3) << n << exR1(n - 2).str() << n;
}

int main()
{
	std::cout << exR1(6).str() << std::endl;
}
