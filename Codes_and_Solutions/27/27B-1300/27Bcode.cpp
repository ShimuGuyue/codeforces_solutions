#include <iostream>
#include <vector>
#include <map>

#define DEBUG 0

#if !DEBUG

void Tournament(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Tournament();
		//std::cout << std::endl;
	}
	return 0;
}

void Tournament(void)
{
	int n;
	std::cin >> n;
	int max(0);
	std::map<int, int> counts;
	std::vector<std::pair<int, int>> contests(n * (n - 1) / 2 - 1);
	for (std::pair<int, int>& ii : contests)
	{
		std::cin >> ii.first >> ii.second;
		++counts[ii.first];
		++counts[ii.second];
		max = std::max(max, std::max(counts[ii.first], counts[ii.second]));
	}
	int x(0), y(0);
	for (std::pair<int, int> ii : counts)
	{
		if (ii.second != max)
			if (x == 0)
				x = ii.first;
			else
				y = ii.first;
	}
	for (std::pair<int, int> i : contests)
	{
		//if (i.first == x)
		//{
		//	for (std::pair<int, int> j : contests)
		//	{
		//		if (i.second == j.first && j.second == y)
		//			;
		//	}
		//}
		if (i.second == x)
		{
			for (std::pair<int, int> j : contests)
			{
				if (i.first == j.second && j.first == y)
					std::swap(x, y);
			}
		}
	}
	std::cout << x << " " << y << std::endl;
}

#else

#endif