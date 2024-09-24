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
	int n;
	std::cin >> n;
	std::vector<int> d(n - 1);
	for (int& i : d)
	{
		std::cin >> i;
	}
	int a, b;
	std::cin >> a >> b;
	int ans(0);
	for (int i(a + 1); i <= b; ++i)
	{
		ans += d[i - 1 - 1];
	}
	std::cout << ans << std::endl;
}