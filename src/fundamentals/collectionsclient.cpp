#include <iostream>
#include <vector>

#include "collections.h"
#include "stopwatch.h"

    int islandPerimeter(std::vector<std::vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
            
        int perimeter = 0;
        for (int row = 0; row < rows; ++row)
        {
            for (int col = 0; col < columns; ++col)
            {
                if (grid[row][col] == 1)
                {
                    for (int m = -1; m < 2; m += 2)
                    {
                        for (int n = -1; n < 2; n += 2)
                        {
                            int n_row = row + m;
                            int n_col = col + n;
                            
                            if (n_row == 0 || n_col == 0 || n_row >= rows || n_col >= columns || n_col grid[n_row][n_col] == 0)
                            {
                                ++perimeter;
                            }
                        }
                    }
                }
            }
        }
        return perimeter;
    }

int main()
{
	const Stopwatch stopwatch;
	
	Bag<int> numbers;
	numbers.add(5);
	numbers.add(6);
	numbers.add(7);

	for (int num : numbers)
	{
		std::cout << num << std::endl;
	}

	std::cout << numbers.size() << std::endl;

	FixedCapacityStackOfStrings strings(5);
	strings.push("5");
	strings.push("10");
	strings.push("15");

	while (!strings.is_empty())
	{
		std::cout << strings.pop() << std::endl;
	}

	FixedCapacityStack<int> numeros(5);
	numeros.push(5);
	numeros.push(10);
	numeros.push(15);

	while (!numeros.is_empty())
	{
		std::cout << numeros.pop() << std::endl;
	}

	ResizableStack<float> floats;
	floats.push(5.f);
	floats.push(10.f);
	floats.push(15.f);

	while (!floats.is_empty())
	{
		std::cout << floats.pop() << std::endl;
	}

	Stack<std::string> notes;
	notes.push("Hey");
	notes.push("what's");
	notes.push("up.");

	for (const std::string& note : notes)
	{
		std::cout << note << std::endl;
	}

	ListStack<std::string> colors;
	colors.push("red");
	colors.push("yellow");
	colors.push("blue");

	while (!colors.is_empty())
	{
		std::cout << colors.pop() << std::endl;
	}

	Queue<std::string> orders;
	orders.enqueue("burger");
	orders.enqueue("fries");
	orders.enqueue("shake");

	while (!orders.is_empty())
	{
		std::cout << orders.dequeue() << std::endl;
	}

	std::cout << stopwatch.get_elapsed_time().count() << " milliseconds" << std::endl;
	std::vector<int> s;
	
	
	return 0;
}
