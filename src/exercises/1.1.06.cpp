// What does the following program print?
// Prints: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

#include <iostream>

int main()
{
	int f = 0;
	int g = 1;
	for (int i = 0; i <= 15; i++)
	{
		std::cout << f << std::endl;
		f = f + g;
		g = f - g;
	}
}
