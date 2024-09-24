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
	int n, a, b, c;
	std::cin >> n >> a >> b >> c;
	int ans(0);
	for (int i(0); i <= c && i * 2 <= n; ++i)
	{
		for (int j(0); j <= b && i * 2 + j * 1 <= n; ++j)
		{
			if (i * 2 + j * 1 + a * 0.5 >= n)
				++ans;
		}
	}
	std::cout << ans << std::endl;
}