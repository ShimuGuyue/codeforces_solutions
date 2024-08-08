#include <iostream>

void Vasilije_in_Cacak();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Vasilije_in_Cacak();
		std::cout << std::endl;
	}
	return 0;
}

void Vasilije_in_Cacak()
{
	long long n, k, x;
	std::cin >> n >> k >> x;
	long long min(k * (1 + k) / 2);
	long long max(k * (n - k + 1 + n) / 2);
	if (x < min || x > max)
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
}