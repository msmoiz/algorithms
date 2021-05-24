// Write a fragment that puts a binary representation of a positive
// integer into a string.

#include <iostream>
#include <sstream>

int main()
{
	const int test = 25;
	
	std::stringstream string;
	for (int k = test; k > 0; k /= 2)
	{
		string << (k % 2);
	}

	std::string output = string.str();
	std::reverse(output.begin(), output.end());
	std::cout << output << std::endl;
}
