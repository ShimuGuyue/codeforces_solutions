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
    while (n)
    {
        std::cout << n << " ";
        if (n == 1)
            break;
        for (int i(2); i <= n; ++i)
        {
            if (n % i == 0)
            {
                n /= i;
                break;
            }
        }
    }
    std::cout << std::endl;
}