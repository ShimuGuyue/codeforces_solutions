#include <iostream>
#include <cmath>

#define DEBUG 0

#if !DEBUG

void Accounting(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Accounting();
		//std::cout << std::endl;
	}
	return 0;
}

void Accounting(void)
{
	int a, b, n;
	std::cin >> a >> b >> n;
	if (a == 0 && b == 0)
	{
		std::cout << 0 << std::endl;/*任意数*/
		return;
	}
	if (a == 0 && b != 0)
	{
		std::cout << "No solution" << std::endl;
		return;
	}
	if (a != 0 && b == 0)
	{
		std::cout << 0 << std::endl;
		return;
	}

	// if (a != 0 && b != 0)
	if (b % a)
	{
		std::cout << "No solution" << std::endl;
		return;
	}
	b /= a;
	if (b > 0)
	{
		for (long long x(1); x <= b; ++x)
		{
			int i(1);
			for (int j(1); j <= n; ++j)
			{
				i *= x;
				if (i > b)
				{
					std::cout << "No solution" << std::endl;
					return;
				}
			}
			if (i == b)
			{
				std::cout << x << std::endl;
				return;
			}
		}
	}
	else
	{
		b *= -1;
		for (long long x(1); x <= b; ++x)
		{
			int i(1);
			for (int j(1); j <= n; ++j)
			{
				i *= x;
				if (i > b)
				{
					std::cout << "No solution" << std::endl;
					return;
				}
			}
			if (i == b)
			{
				std::cout << -x << std::endl;
				return;
			}
		}
	}
}


#else

#endif