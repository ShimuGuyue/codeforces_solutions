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
	std::vector<int> a(n);
	std::vector<int> b(n);
	for (int& i : a)
	{
		std::cin >> i;
	}
	for (int& i : b)
	{
		std::cin >> i;
	}

	std::vector<std::pair<int, int>> ans;
	for (int i(0); i < n; ++i)
	{
		if (a[i] == b[i])
			continue;
		int index(-1);
		for (int j(i + 1); j < n; ++j)
		{
			if (b[j] == a[i])
			{
				index = j;
				break;
			}
		}
		for (int j(index); j > i; --j)
		{
			std::swap(b[j - 1], b[j]);
			ans.push_back({ j, j + 1 });
		}
	}
	std::cout << ans.size() << std::endl;
	for (std::pair<int, int> ii : ans)
	{
		std::cout << ii.first << " " << ii.second << std::endl;
	}
}