#include <iostream>
#include <map>

#define DEBUG 0

#if !DEBUG

void Spit_Problem(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Spit_Problem();
		//std::cout << std::endl;
	}
	return 0;
}

void Spit_Problem(void)
{
	int n;
	std::cin >> n;
	std::map<int, int> camels;
	while (n--)
	{
		int x, d;
		std::cin >> x >> d;
		camels[x] = x + d;
	}
	for (std::pair<int, int> i : camels)
	{
		for (std::pair<int, int> j : camels)
		{
			if (i.first == j.second && i.second == j.first)
			{
				std::cout << "YES" << std::endl;
				return;
			}
		}
	}
	std::cout << "NO" << std::endl;
}

#else

#endif