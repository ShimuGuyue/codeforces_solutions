#include <iostream>

bool judgeComposite(int n);
std::pair<int, int> Design_Tutorial_Learn_from_Math(int n);

int main(void)
{
	int n;
	std::cin >> n;
	std::cout << Design_Tutorial_Learn_from_Math(n).first << " " << Design_Tutorial_Learn_from_Math(n).second << std::endl;
	return 0;
}

std::pair<int, int> Design_Tutorial_Learn_from_Math(int n)
{
	for (int i(4); i <= n - 4; ++i)
	{
		if (judgeComposite(i) && judgeComposite(n - i))
			return { i, n - i };
	}
	return { -1, -1 };
}

bool judgeComposite(int n)
{
	for (int i(2); i * i <= n; ++i)
	{
		if (n % i == 0)
			return true;
	}
	return false;
}