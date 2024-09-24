#include <iostream>
#include <stack>

void turnSystem(int n, int num);
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
	int k;
	std::cin >> k;
	for (int i(1); i < k; ++i)
	{
		for (int j(1); j < k; ++j)
		{
			int ans(i * j);
			turnSystem(k, ans);
		}
		std::cout << std::endl;
	}
}

void turnSystem(int n, int num)
{
	std::stack<int> ans;
	while (num)
	{
		ans.push(num % n);
		num /= n;
	}
	while (!ans.empty())
	{
		std::cout << ans.top();
		ans.pop();
	}
	std::cout << " ";
}