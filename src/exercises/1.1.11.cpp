// Write a code fragment that prints the contents of
// a two-dimensional boolean array, using *
// to represent true and a space to represent false.
// Include row and column numbers

#include <iostream>

void print_flags(bool flags[5][5])
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			std::cout << "Flag"
				<< "[" << i << "]"
				<< "[" << j << "]"
				<< ": " << (flags[i][j] ? "*" : " ")
				<< std::endl;
		}
	}
}

int main()
{
	bool flags[5][5] =
	{
		true, false, false, true, true,
		false, true, false, false, true,
		false, true, false, false, true,
		true, false, true, false, true,
		true, false, true, false, true
	};
	print_flags(flags);
}
