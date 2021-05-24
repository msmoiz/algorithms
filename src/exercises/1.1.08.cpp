// What do each of the following print?
// Explain each outcome.

#include <iostream>

int main()
{
	// Prints: b
	// Prints the character
	std::cout << 'b' << std::endl;

	// Prints 197
	// Adds the character codes for 'b' and 'c'
	// and prints that sum
	std::cout << ('b' + 'c') << std::endl;

	// Prints e
	// Adds the character for 'a' and 4
	// which results in the character code for
	// 'e', and casts that to a character
	std::cout << (char)('a' + 4) << std::endl;
}
