#pragma once

#include <chrono>

class Stopwatch
{
	using clock = std::chrono::high_resolution_clock;
	
	clock::time_point start_;

public:
	
	Stopwatch();

	auto get_elapsed_time() const
	{
		return std::chrono::duration<double, std::milli>(clock::now() - start_);
	}
};
