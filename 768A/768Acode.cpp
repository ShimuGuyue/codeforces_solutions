#include <iostream>

void Oath_of_the_Night_s_Watch();

int main(void)
{
	Oath_of_the_Night_s_Watch();
	return 0;
}

void Oath_of_the_Night_s_Watch()
{
	int n;
	std::cin >> n;
	int max(0);
	int countMax(0);
	int min(INT_MAX);
	int countMin(0);
	for (int i(0); i < n; ++i)
	{
		int a;
		std::cin >> a;
		if (a > max)
		{
			max = a;
			countMax = 1;
		}
		else if (a == max)
			++countMax;
		if (a < min)
		{
			min = a;
			countMin = 1;
		}
		else if (a == min)
			++countMin;
	}
	if (max == min)
		std::cout << 0 << std::endl;
	else
		std::cout << n - countMax - countMin << std::endl;
}