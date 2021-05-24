#include <string>

class Counter
{
	std::string name_;
	int count_;

public:

	Counter(std::string name);
	void increment();
	int tally() const;
	std::string to_string() const;
};
