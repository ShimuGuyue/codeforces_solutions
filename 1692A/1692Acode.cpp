#include <iostream>

int Marathon(int a, int b, int c, int d);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b, c, d;
		std::cin >> a >> b >> c >> d;
		std::cout << Marathon(a, b, c, d) << std::endl;
	}
	return 0;
}

int Marathon(int a, int b, int c, int d)
{
	int front(0);
	if (b > a)
		++front;
	if (c > a)
		++front;
	if (d > a)
		++front;
	return front;
}