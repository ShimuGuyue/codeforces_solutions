#include <iostream>
#include <cmath>

void solve(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		solve();
		//std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
	int x, y;
	std::cin >> x >> y;
	if (x == 0 || y == 0)
	{
		std::cout << "black" << std::endl;
		return;
	}
	int len_2(x * x + y * y);
	if ((x > 0 && y > 0) || (x < 0 && y < 0))
	{
		for (int i(1); ; ++i)
		{
			if (i % 2 == 1 && (i - i) * (i - 1) <= len_2 && len_2 <= i * i)
			{
				std::cout << "black" << std::endl;
				return;
			}
			else if (i % 2 == 0 && (i - i) * (i - 1) < len_2 && len_2 < i * i)
			{
				std::cout << "white" << std::endl;
				return;
			}
		}
	}
	else
	{
		for (int i(1); ; ++i)
		{
			if (i % 2 == 0 && (i - i) * (i - 1) <= len_2 && len_2 <= i * i)
			{
				std::cout << "black" << std::endl;
				return;
			}
			else if (i % 2 == 1 && (i - i) * (i - 1) < len_2 && len_2 < i * i)
			{
				std::cout << "white" << std::endl;
				return;
			}
		}
	}
}