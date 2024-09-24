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
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>> garden(n, std::vector<int>(m));
	for (std::vector<int>& vi : garden)
	{
		for (int& i : vi)
		{
			std::cin >> i;
		}
	}
	int a, b;
	std::cin >> a >> b;
	int ans(INT_MAX);
	for (int i(0); i < n - a + 1; ++i)
	{
		for (int j(0); j < m - b + 1; ++j)
		{
			int count(0);
			for (int ii(0); ii < a; ++ii)
			{
				for (int jj(0); jj < b; ++jj)
				{
					count += garden[i + ii][j + jj];
				}
			}
			ans = std::min(ans, count);
		}
	}
	for (int i(0); i < n - b + 1; ++i)
	{
		for (int j(0); j < m - a + 1; ++j)
		{
			int count(0);
			for (int ii(0); ii < b; ++ii)
			{
				for (int jj(0); jj < a; ++jj)
				{
					count += garden[i + ii][j + jj];
				}
			}
			ans = std::min(ans, count);
		}
	}
	std::cout << ans << std::endl;
}