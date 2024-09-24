#include <iostream>
#include <vector>

#define DEBUG 0

#if !DEBUG

void Stripe(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Stripe();
		//std::cout << std::endl;
	}
	return 0;
}

void Stripe(void)
{
	int n;
	std::cin >> n;
	std::vector<int> sums(n);
	std::cin >> sums[0];
	for (int i(1); i < n; ++i)
	{
		std::cin >> sums[i];
		sums[i] += sums[i - 1];
	}
	int ans(0);
	for (int i(0); i < n - 1; ++i)
	{
		if (sums[i] * 2 == sums.back())
			++ans;
	}
	std::cout << ans << std::endl;
}

#else

#endif