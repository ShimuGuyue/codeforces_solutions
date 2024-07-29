#include <iostream>
int main(void)
{
	int a, b;
	std::cin >> a >> b;
	for (int i = 1; ; ++i)
	{
		a *= 3;
		b *= 2;
		if (a > b)
		{
			std::cout << i << std::endl;
			break;
		}
	}
	return 0;
}