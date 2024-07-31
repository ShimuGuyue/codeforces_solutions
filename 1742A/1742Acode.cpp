#include <iostream>

bool Sum(int a, int b, int c);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;
		if (Sum(a, b, c))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}

bool Sum(int a, int b, int c)
{
	if (a == b + c || b == a + c || c == a + b)
		return true;
	return false;
}