#include <iostream>
#include "counter.h"

int main()
{
	Counter heads("heads");
	Counter tails("tails");

	heads.increment();
	heads.increment();
	tails.increment();

	std::cout << heads.to_string() << " " << tails.to_string() << std::endl;
	std::cout << (heads.tally() - tails.tally()) << std::endl;
}
