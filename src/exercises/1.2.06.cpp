// Output whether two strings are circular shifts of one another.

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		std::cerr << "Must pass two arguments." << std::endl;
		return -1;
	}
	
	std::string s = argv[1];
	std::string t = argv[2];

	std::cout << (s.append(s).find(t) != std::string::npos) << std::endl;
}
