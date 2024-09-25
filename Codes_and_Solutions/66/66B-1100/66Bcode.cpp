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
    std::vector<int> h(n);
    for (int& i : h)
    {
        std::cin >> i;
    }
    int ans(0);
    for (int i(0); i < n; ++i)
    {
        int sum(1);
        for (int j(i - 1); j >= 0; --j)
        {
            if (h[j] <= h[j + 1])
                ++sum;
            else
                break;
        }
        for (int j(i + 1); j < n; ++j)
        {
            if (h[j] <= h[j - 1])
                ++sum;
            else
                break;
        }
        ans = std::max(ans, sum);
    }
    std::cout << ans << std::endl;
}