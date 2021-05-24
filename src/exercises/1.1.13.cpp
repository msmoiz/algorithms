// Write a code fragment to print the transposition of a
// two-dimensional array with m rows and n columns.

#include <iostream>

int main()
{
	int a[5][5] =
	{
		1, 1, 1, 1, 1,
		2, 2, 2, 2, 2,
		3, 3, 3, 3, 3,
		4, 4, 4, 4, 4,
		5, 5, 5, 5, 5
	};

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			std::cout << a[j][i] << " ";
		}
		std::cout << std::endl;
	}
}
