#include <iostream>

long long Calculating_Function(long long n);

int main(void)
{
	long long n;
	std::cin >> n;
	std::cout << Calculating_Function(n) << std::endl;
	return 0;
}

long long Calculating_Function(long long n)
{
	if (n % 2 == 0)
		return n / 2;
	else
		return -(n + 1) / 2;
}