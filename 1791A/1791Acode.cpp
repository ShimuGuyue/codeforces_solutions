#include <iostream>

bool Codeforces_Checking(char c);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		char c;
		std::cin >> c;
		if (Codeforces_Checking(c))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}

bool Codeforces_Checking(char c)
{
	switch (c)
	{
	case 'c':
	case 'o':
	case 'd':
	case 'e':
	case 'f':
	case 'r':
	case 's':
		return true;
	default:
		return false;
	}
}