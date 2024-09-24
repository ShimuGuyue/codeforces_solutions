#include <iostream>
#include <vector>
#include <algorithm>

#define DEBUG 0

#if !DEBUG

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
	int n, d;
	std::cin >> n >> d;
	std::vector<int> h(n);
	for (int& i : h)
	{
		std::cin >> i;
	}
	sort(h.begin(), h.end());
	int ans(0);
	for (int i(0); i < n; ++i)
	{
		for (int j(i - 1); j >= 0; --j)
		{
			if (h[i] - h[j] <= d)
				++ans;
		}
		for (int k(i + 1); k < n; ++k)
		{
			if (h[k] - h[i] <= d)
				++ans;
		}
	}
	std::cout << ans << std::endl;
}

#else

#endif