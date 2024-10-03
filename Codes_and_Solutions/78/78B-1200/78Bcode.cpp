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
    std::cout << "ROY";
    n -= 3;
    for (int i(0); i < n; ++i)
    {
        if (i % 4 == 0)
            std::cout << "G";
        else if (i % 4 == 1)
            std::cout << "B";
        else if (i % 4 == 2)
            std::cout << "I";
        else if (i % 4 == 3)
            std::cout << "V";
    }
    std::cout << std::endl;
}