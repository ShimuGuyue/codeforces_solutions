#include <iostream>
#include <vector>

void Long_Jumps();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Long_Jumps();
		//std::cout << std::endl;
	}
	return 0;
}

void Long_Jumps()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> a[i];
	}
	int ans(0);
	std::vector<int> jumps(n);
	for (int i(n - 1); i >= 0; --i)
	{
		if (i + a[i] > n - 1)
			jumps[i] = a[i];
		else
			jumps[i] = a[i] + jumps[i + a[i]];
		ans = std::max(ans, jumps[i]);
	}
	std::cout << ans << std::endl;
}