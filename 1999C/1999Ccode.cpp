#include <iostream>
#include <vector>

void Showering();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Showering();
		//std::cout << std::endl;
	}
	return 0;
}

void Showering()
{
	int n, s, m;
	std::cin >> n >> s >> m;
	std::vector<std::pair<int, int>> a(n + 2);
	a[0] = { 0, 0 };
	for (int i(1); i <= n; ++i)
	{
		std::cin >> a[i].first >> a[i].second;
	}
	a[n + 1] = { m, m };
	bool ok(false);
	for (int i(1); i <= n + 1; ++i)
	{
		if (a[i].first - a[i - 1].second >= s)
			ok = true;
	}
	if (ok)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}