#include <iostream>

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
	int k, a, b;
	std::cin >> k >> a >> b;
	std::string s;
	std::cin >> s;
	int n(s.size());
	if (a * k > n || b * k < n)
	{
		std::cout << "No solution" << std::endl;
		return;
	}
	int len(n / k);
	int extra(n % k);
	int index(0);
	for (int i(0); i < extra; ++i)
	{
		for (int j(0); j < len + 1; ++j)
		{
			std::cout << s[index++];
		}
		std::cout << std::endl;
	}
	for (int i(extra); i < k; ++i)
	{
		for (int j(0); j < len; ++j)
		{
			std::cout << s[index++];
		}
		std::cout << std::endl;
	}
}