#include <iostream>

void Fox_And_Snake(int n, int m);

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	Fox_And_Snake(n, m);
	return 0;
}

void Fox_And_Snake(int n, int m)
{
	for (int i(1); i <= n; ++i)
	{
		if (i % 2 == 1)
		{
			for (int j(1); j <= m; ++j)
			{
				std::cout << '#';
			}
			std::cout << std::endl;
		}
		else if (i % 4 == 2)
		{
			for (int j(1); j < m; ++j)
			{
				std::cout << '.';
			}
			std::cout << '#' << std::endl;
		}
		else if (i % 4 == 0)
		{
			std::cout << '#';
			for (int j(2); j <= m; ++j)
			{
				std::cout << '.';
			}
			std::cout << std::endl;
		}
	}
	return;
}