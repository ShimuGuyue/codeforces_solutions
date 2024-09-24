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
	int mode0(0);
	int mode1(0);
	int mode2(0);
	while (n--)
	{
		std::string number;
		std::cin >> number;
		int mode(0);
		for (char c : number)
		{
			mode += c - '0';
		}
		mode %= 3;
		if (mode == 0)
			++mode0;
		else if (mode == 1)
			++mode1;
		else if (mode == 2)
			++mode2;
	}
	int ans(mode0 / 2 + std::min(mode1, mode2));
	std::cout << ans << std::endl;
}