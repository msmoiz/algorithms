// Give the value printed by each of the following code fragments

#include <iostream>

// Prints: 3.0001
void a()
{
	double t = 9.0;
	while (std::abs(t - 9.0/t) > 0.001)
	{
		t = (9.0 / t + t) / 2.0;
	}
	std::cout.precision(5);
	std::cout << t << std::endl;
}

// Prints: 499500
void b()
{
	int sum = 0;
	for (int i = 1; i < 1000; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum++;
		}
	}
	std::cout << sum << std::endl;
}

// Prints: 10000
void c()
{
	int sum = 0;
	for (int i = 1; i < 1000; i *= 2)
	{
		for (int j = 0; j < 1000; j++)
		{
			sum++;
		}
	}
	std::cout << sum << std::endl;
}

int main()
{
	a();
	b();
	c();
}
