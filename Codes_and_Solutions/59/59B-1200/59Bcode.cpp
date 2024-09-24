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
    std::vector<int> odd;
    bool ok(false);
    int sum(0);
    while (n--)
    {
        int a;
        std::cin >> a;
        if (a % 2)
        {
            ok = true;
            odd.push_back(a);
        }
        else
            sum += a;
    }
    if (!ok)
    {
        std::cout << 0 << std::endl;
        return;
    }
    int min(INT_MAX);
    for (int i : odd)
    {
        sum += i;
        min = std::min(min, i);
    }
    if (odd.size() % 2 == 0)
        sum -= min;
    std::cout << sum << std::endl;
}