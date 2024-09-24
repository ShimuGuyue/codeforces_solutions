#include <iostream>
#include <vector>

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
	int n, m, k;
	std::cin >> n >> m >> k;
	std::vector<int> vitality(m, INT_MAX);
	while (n--)
	{
		int r, c;
		std::cin >> r >> c;
		vitality[r - 1] = std::min(vitality[r - 1], c);
	}
	int sum(0);
	for (int i : vitality)
	{
		if (i != INT_MAX)
			sum += i;
	}
	int ans(std::min(sum, k));
	std::cout << ans << std::endl;
}

#else
int main(void)
{

	return 0;
}
#endif