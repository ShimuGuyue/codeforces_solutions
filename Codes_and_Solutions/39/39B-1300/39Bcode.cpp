#include <iostream>
#include <vector>
#include <queue>

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
	std::vector<int> a(n + 1);
	std::queue<int> ans;
	int flag(0);
	for (int i(1); i <= n; ++i)
	{
		std::cin >> a[i];
		if (a[i] == flag + 1)
		{
			ans.push(2000 + i);
			++flag;
		}
	}
	std::cout << flag << std::endl;
	if(flag == 0)
		return;
	while (!ans.empty())
	{
		std::cout << ans.front() << " ";
		ans.pop();
	}
	std::cout << std::endl;
}