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
	std::vector<std::pair<int, int>> sections(n + 1, { INT_MAX, 0 }); //{ t, c}
	while (m--)
	{
		int l, r, t, c;
		std::cin >> l >> r >> t >> c;
		for (int i(l); i <= r; ++i)
		{
			if (t < sections[i].first)
				sections[i] = { t, c };
		}
	}
	int ans(0);
	for (int i(1); i <= n; ++i)
	{
		ans += sections[i].second;
	}
	std::cout << ans << std::endl;
}