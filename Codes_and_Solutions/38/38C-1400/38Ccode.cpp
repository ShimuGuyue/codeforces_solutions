#include <iostream>
#include <vector>

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
	int n, l;
	std::cin >> n >> l;
	std::vector<int> a(n);
	int max(0);
	for (int& i : a)
	{
		std::cin >> i;
		max = std::max(max, i);
	}
	int ans(0);
	for (int i(l); i <= max; ++i)
	{
		int sum(0);
		for (int j : a)
		{
			sum += j / i;
		}
		ans = std::max(ans, sum * i);
	}
	std::cout << ans << std::endl;
}