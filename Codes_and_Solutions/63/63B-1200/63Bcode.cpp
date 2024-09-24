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
    int n, k;
	std::cin >> n >> k;
	std::vector<int> a(n);
	for (int &i : a)
	{
		std::cin >> i;
	}
	int flag(INT_MAX);
	for (int i(n - 1); i >= 0; --i)
	{
		if (a[i] < flag)
			flag = a[i];
		else if (a[i] < k)
			--flag;
	}
	int ans(k - flag);
	std::cout << ans << std::endl;
}