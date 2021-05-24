#pragma once

#include <vector>

struct ThreeSum
{
	static int count(std::vector<int> a)
	{
		const int n = a.size();
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				for (int k = j + 1; k < n; ++k)
				{
					if (a[i] + a[j] + a[k] == 0)
					{
						++count;
					}
				}
			}
		}
		return count;
	}
};
