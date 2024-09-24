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
    int one(0);
    int two(0);
    int three(0);

    int n;
    std::cin >> n;
    for (int i(0); i < n; ++i)
    {
        int a;
        std::cin >> a;
        if (a == 1)
            ++one;
        else if (a == 2)
            ++two;
        else if (a == 3)
            ++three;
    }
    int max(std::max(one, std::max(two, three)));
    int ans(n - max);
    std::cout << ans << std::endl;
}