#include <iostream>

long long Even_Odds(long long n, long long k);

int main(void)
{
	long long n, k;
	std::cin >> n >> k;
	std::cout << Even_Odds(n, k) << std::endl;
	return 0;
}

long long Even_Odds(long long n, long long k)
{
	if (k * 2 - 1 <= n)
		return k * 2 - 1;
	else
		return (k - ((n + 1) / 2)) * 2;
}