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
    int n, k;
    std::cin >> n >> k;
    std::vector<int> days(n + 1);
    int c;
    std::cin >> c;
    while (c--)
    {
        int holiday;
        std::cin >> holiday;
        days[holiday] = 1;
    }
    int ans(0);
    int flag(0);
    for (int i(1); i <= n; ++i)
    {
        if (days[i] == 1)
        {
            ++ans;
            flag = 0;
        }
        else
        {
            ++flag;
            if (flag == k)
            {
                ++ans;
                flag = 0;
            }
        }
    }
    std::cout << ans << std::endl;
}