#include <iostream>

int Yet_Another_Two_Integers_Problem(int a, int b);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << Yet_Another_Two_Integers_Problem(a, b) << std::endl;
	}
	return 0;
}

int Yet_Another_Two_Integers_Problem(int a, int b)
{
	int dif = std::max(a, b) - std::min(a, b);
	return dif % 10 == 0 ? dif / 10 : dif / 10 + 1;
}