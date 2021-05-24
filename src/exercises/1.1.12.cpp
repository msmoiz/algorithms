// What does the following code fragment print?
// Prints: 0 1 2 3 4 4 3 2 1 0

#include <iostream>

int main()
{
	int a[10];
	
	for (int i = 0; i < 10; i++)
	{
		a[i] = 9 - i;
	}
	
	for (int i = 0; i < 10; i++)
	{
		a[i] = a[a[i]];
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << a[i] << std::endl;
	}
}
