#include <iostream>

char Plus_or_Minus(int a, int b, int c);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;
		std::cout << Plus_or_Minus(a, b, c) << std::endl;
	}
	return 0;
}

char Plus_or_Minus(int a, int b, int c)
{
	if (a + b == c)
		return '+';
	else
		return '-';
}