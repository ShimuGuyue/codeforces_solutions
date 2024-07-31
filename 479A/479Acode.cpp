#include <iostream>

int Expression(int a, int b, int c);

int main(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << Expression(a, b, c) << std::endl;
	return 0;
}

int Expression(int a, int b, int c)
{
	if (a == 1 && b == 1 && c == 1)
		return 3;
	else if (a == 1 && b == 1 && c != 1)
		return 2 * c;
	else if (a == 1 && b != 1 && c == 1)
		return b + 2;
	else if (a != 1 && b == 1 && c == 1)
		return 2 * a;
	else if (a == 1 && b != 1 && c != 1)
		return (b + 1) * c;
	else if (a != 1 && b == 1 && c != 1)
		return a < c ? (a + 1) * c : a * (c + 1);
	else if (a != 1 && b != 1 && c == 1)
		return a * (b + 1);
	else
		return a * b * c;
}