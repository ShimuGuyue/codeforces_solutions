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
	std::vector<int> days(n);
	while (m--)
	{
		int a, b;
		std::cin >> a >> b;
		for (int i(a - 1); i < b; ++i)
		{
			++days[i];
		}
	}
	for (int i(0); i < n; ++i)
	{
		if (days[i] != 1)
		{
			std::cout << i + 1 << " " << days[i] << std::endl;
			return;
		}
	}
	std::cout << "OK" << std::endl;
}