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
	int n, m, k;
	std::cin >> n >> m >> k;
	std::vector<int> d(m);
	for (int& i : d)
	{
		std::cin >> i;
	}
	std::vector<int> mosquitoes(k);
	for (int& i : mosquitoes)
	{
		std::cin >> i;
	}
	int min(INT_MAX);
	std::vector<int> ans;
	for (int i(0); i < m; ++i)
	{
		int sum(0);
		for (int j : mosquitoes)
		{
			if (j % d[i] == 0)
				++sum;
		}
		if (sum < min)
		{
			min = sum;
			ans.clear();
			ans.push_back(i + 1);
		}
		else if (sum == min)
			ans.push_back(i + 1);
	}
	std::cout << ans.size() << std::endl;
	for (int i : ans) 
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}