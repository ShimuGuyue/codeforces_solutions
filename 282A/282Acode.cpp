#include <iostream>
int main(void)
{
	int n;
	std::cin >> n;
	int x(0);
	while (n--)
	{
		std::string solu;
		std::cin >> solu;
		if (solu[1] == '+')
			++x;
		else if (solu[1] == '-')
			--x;
	}
	std::cout << x;
	return 0;
}