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
    int ans(1);
    for (int i(2); i <= n; ++i)
    {
        ans *= 3;
        ans %= 1000003;
    }
    std::cout << ans << std::endl;
}