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
	std::string ans;
	int max(INT_MIN);
	while (n--)
	{
		std::string handle;
		int plus, minus, a, b, c, d, e;
		std::cin >> handle >> plus >> minus >> a >> b >> c >> d >> e;
		int sourse(plus * 100 - minus * 50 + a + b + c + d + e);
		if (sourse > max)
		{
			max = sourse;
			ans = handle;
		}
	}
    std::cout << ans << std::endl;
}