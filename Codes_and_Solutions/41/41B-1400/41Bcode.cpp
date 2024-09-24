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
	int n, b;
	std::cin >> n >> b;
	std::vector<int> a(n);
	for (int& i : a)
	{
		std::cin >> i;
	}
	int ans(b);
	for (int i(0); i < n; ++i)
	{
		int max(0);
		for (int j(i + 1); j < n; ++j)
		{
			max = std::max(max, a[j]);
		}
		if (max > a[i])
		{
			int count(b / a[i]);
			ans = std::max(ans, b + count * (max - a[i]));
		}
	}
	std::cout << ans <<  std::endl;
}