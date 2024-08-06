#include <iostream>

void Not_Adjacent_Matrix();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Not_Adjacent_Matrix();
		//std::cout << std::endl;
	}
	return 0;
}

void Not_Adjacent_Matrix()
{
	int n;
	std::cin >> n;
	if (n == 1)
	{
		std::cout << 1 << std::endl;
		return;
	}
	if (n == 2)
	{
		std::cout << -1 << std::endl;
		return;
	}
	if (n % 2)
	{
		int count1(1);
		int count2(n * n / 2 + 2);
		for (int i(0); i < n; ++i)
		{
			for (int j(0); j < n; ++j)
			{
				if (i % 2 == j % 2)
					std::cout << count1++ << " ";
				else
					std::cout << count2++ << " ";
			}
			std::cout << std::endl;
		}
	}
	else
	{
		int count1(1);
		int count2(n * n / 2 + 1);
		for (int i(0); i < n; ++i)
		{
			for (int j(0); j < n; ++j)
			{
				if (j % 2)
					std::cout << count2++ << " ";
				else
					std::cout << count1++ << " ";
			}
			std::cout << std::endl;
		}
	}
}