// Write a code fragment that prints true fi the double variables x and y
// are both strictly between 0 and 1 and false otherwise.

#include <iostream>

void print_normal(double x, double y)
{
	if (x >= 0 && x <= 1 && y >= 0 && y <= 1)
	{
		std::cout << "true" << std::endl;
	}

	else
	{
		std::cout << "false" << std::endl;
	}
}
