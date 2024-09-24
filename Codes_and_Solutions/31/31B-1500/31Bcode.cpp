#include <iostream>

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
	std::string s;
	std::cin >> s;
	if (s.front() == '@' || s.back() == '@')
	{
		std::cout << "No solution" << std::endl;
		return;
	}
	int at(0);
	for (char c : s)
	{
		if (c == '@')
			++at;
	}
	if (at == 0)
	{
		std::cout << "No solution" << std::endl;
		return;
	}
	std::string ans;
	int count(2);//大于 2 的任何数
	for (char c : s)
	{
		if (c == '@')
		{
			if (count < 2)
			{
				std::cout << "No solution" << std::endl;
				return;
			}
			else
			{
				count = 0;
			}
		}
		else
		{
			++count;
		}
		ans += c;
		if (count == 1 && at > 1)
		{
			ans += ',';
			--at;
		}
	}
	std::cout << ans << std::endl;
}

#else

#endif