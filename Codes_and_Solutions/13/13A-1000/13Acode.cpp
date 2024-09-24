#include <iostream>

int Gcd(int a, int b);
void Numbers();

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Numbers();
		//std::cout << std::endl;
	}
	return 0;
}

void Numbers()
{
	int a;
	std::cin >> a;
	int y(a - 2);
	int x(0);
	for (int i(2); i < a; ++i)
	{
		int aa(a);
		while (aa)
		{
			x += aa % i;
			aa /= i;
		}
	}
	int gcd(Gcd(x, y));
	x /= gcd;
	y /= gcd;
	std::cout << x << "/" << y << std::endl;
}

int Gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	Gcd (b, a % b);
}