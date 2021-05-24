#include <random>
#include <iostream>

#include "stopwatch.h"
#include "threesum.h"

int get_random_int(int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	const std::uniform_int_distribution<> distr(-max, max);
	return distr(gen);
}

auto time_trial(int n)
{
	const int max = 1000000;

	std::vector<int> a;
	a.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		a.push_back(get_random_int(max));
	}
	
	const Stopwatch stopwatch;
	ThreeSum::count(a);
	return stopwatch.get_elapsed_time();
}

int main()
{
	for (int n = 250; true; n *= 2)
	{
		auto time = time_trial(n);
		std::cout << n << "\t" << time.count() << std::endl;
	}
}
