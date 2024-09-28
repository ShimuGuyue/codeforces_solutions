#include <iostream>

void solve(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		solve();
		//std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
    int n, k, t;
	std::cin >> n >> k >> t;
	int sum(n * k * t / 100);
	for (int i(0); i < n; ++i)
	{
		if (sum >= k)
		{
			std::cout << k << " ";
			sum -= k;
		}
		else
		{
			std::cout << sum << " ";
			sum = 0;
		}
	}
	std::cout << std::endl;
}