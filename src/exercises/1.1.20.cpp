// Write a recursive static method that computes the value of ln (n!)

#include <iostream>
#include <cmath>

double compute_natural_log_factorial(int n)
{
	if (n == 1)
	{
		return 0.0;
	}
	
	return std::log(n) + compute_natural_log_factorial(n - 1);
}

int main()
{
	std::cout << compute_natural_log_factorial(5) << std::endl;
}
