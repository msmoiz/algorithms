// Write a program that takes three integer command line arguments
// and prints equal if all three are equal and not equal
// otherwise.

#include <iostream>

int main(int argc, char* argv[])
{
	if (argc < 4)
	{
		return -1;
	}
	
	int elements[3] = { 0 };
	for (int i = 0; i < 3; ++i)
	{
		elements[i] = atoi(argv[i + 1]);
	}

	if (elements[0] == elements[1] && elements[1] == elements[2])
	{
		std::cout << "Equal" << std::endl;
	}

	else
	{
		std::cout << "Not equal" << std::endl;
	}
}