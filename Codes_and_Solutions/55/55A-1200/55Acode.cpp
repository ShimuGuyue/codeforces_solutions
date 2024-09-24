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
	std::vector<int> flag(n + 1);
	int loc(1);
	flag[1] = 1;
	int count(1);
	for (int i(1); i <= n; ++i)
	{
		loc += i;
		loc %= n;
		if (loc == 0)
			loc = n;
		if (!flag[loc])
		{
			flag[loc] = 1;
			++count;
		}
	}
	if (count == n)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}