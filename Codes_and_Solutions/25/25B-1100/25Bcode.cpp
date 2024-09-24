#include <iostream>

#define DEBUG 0

#if !DEBUG

void Phone_numbers(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Phone_numbers();
		//std::cout << std::endl;
	}
	return 0;
}

void Phone_numbers(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	if (n % 2)
	{
		std::cout << s[0] << s[1] << s[2];
		for (int i(3); i < n; ++i)
		{
			if ((i + 1) % 2 == 0 && i + 1 != n)
				std::cout << "-";
			std::cout << s[i];
		}
		std::cout << std::endl;
	}
	else
	{
		for (int i(0); i < n; ++i)
		{
			std::cout << s[i];
			if ((i + 1) % 2 == 0 && i + 1 != n)
				std::cout << "-";
		}
		std::cout << std::endl;
	}
}

#else

#endif