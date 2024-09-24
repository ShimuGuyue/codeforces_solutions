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
	int n;
	std::cin >> n;
	int flag(1);
	int dif(1);
	for (int i(1); i < n; ++i)
	{
		flag += dif;
		flag %= n;
		if (flag == 0)
			flag = n;
		std::cout << flag << " ";
		++dif;
	}
	std::cout << std::endl;
}