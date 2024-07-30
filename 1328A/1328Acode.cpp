#include <iostream>

int Divisibility_Problem(int a, int b);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << Divisibility_Problem(a, b) << std::endl;
	}
	return 0;
}

int Divisibility_Problem(int a, int b)
{
	if (a % b == 0)
		return 0;
	return b - a % b;
}