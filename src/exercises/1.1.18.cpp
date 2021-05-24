#include <iostream>

int mystery(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}

	if (b % 2 == 0)
	{
		return mystery(a + a, b / 2);
	}

	return mystery(a + a, b / 2) + a;
}

int main()
{
	std::cout << mystery(2, 25) << std::endl; // 50
	std::cout << mystery(3, 11) << std::endl; // 33
}
