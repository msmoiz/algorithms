#include "counter.h"

Counter::Counter(std::string name)
	: name_(name)
	, count_(0)
{

}

void Counter::increment()
{
	++count_;
}

int Counter::tally() const
{
	return count_;
}

std::string Counter::to_string() const
{
	return std::to_string(count_) + " " + name_;
}
