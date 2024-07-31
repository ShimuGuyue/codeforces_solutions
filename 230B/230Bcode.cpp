#include <iostream>
#include <cmath>

bool prime(long long l);
bool T_primes(long long l);

int main(void)
{
	int n;
	std::cin >> n;
	while (n--)
	{
		long long x;
		std::cin >> x;
		if (T_primes(x))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}

bool T_primes(long long l)
{
	long long sq(static_cast<long long>(sqrt(l)));
	if (l == 1)
		return false;
	if (sq * sq == l && prime(sq))
		return true;
	else
		return false;
}

bool prime(long long l)
{
	for (long long i(2); i * i <= l; ++i)
	{
		if (l % i == 0)
			return false;
	}
	return true;
}