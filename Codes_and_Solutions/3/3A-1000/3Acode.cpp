#include <iostream>

void Shortest_path_of_the_king();

int main(void)
{
	Shortest_path_of_the_king();
	return 0;
}

void Shortest_path_of_the_king()
{
	std::string s;
	std::string t;
	std::cin >> s;
	std::cin >> t;
	int x(t[0] - s[0]);
	int y(t[1] - s[1]);
	int n(std::max(abs(x), abs(y)));
	std::cout << n << std::endl;
	while (n--)
	{
		if (x == 0 && y > 0)
		{
			std::cout << "U" << std::endl;
			--y;
		}
		else if (x == 0 && y < 0)
		{
			std::cout << "D" << std::endl;
			++y;
		}
		else if (y == 0 && x > 0)
		{
			std::cout << "R" << std::endl;
			--x;
		}
		else if (y == 0 && x < 0)
		{
			std::cout << "L" << std::endl;
			++x;
		}
		else if (x > 0 && y > 0)
		{
			std::cout << "RU" << std::endl;
			--x; --y;
		}
		else if (x > 0 && y < 0)
		{
			std::cout << "RD" << std::endl;
			--x; ++y;
		}
		else if (x < 0 && y > 0)
		{
			std::cout << "LU" << std::endl;
			++x; --y;
		}
		else if (x < 0 && y < 0)
		{
			std::cout << "LD" << std::endl;
			++x; ++y;
		}
	}
}