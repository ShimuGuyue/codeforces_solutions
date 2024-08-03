#include <iostream>

bool Odd_Divisor(long long n);

int main(void)
{
	//std::cout << 1099511627776 % 2;
	int t;
	std::cin >> t;
	while (t--)
	{
		long long n;
		std::cin >> n;
		if (Odd_Divisor(n))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}

bool Odd_Divisor(long long n)
{
	while (n % 2 == 0)
	{
		n /= 2;
	}
	if (n != 1)
		return true;
	return false;
}