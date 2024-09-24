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
    int l(1);
    int r(n);
    while (l < r)
    {
        std::cout << l++ << " " << r-- << " ";
    }
    if (n % 2)
        std::cout << n / 2 + 1 << std::endl;
    else
        std::cout << std::endl;
}