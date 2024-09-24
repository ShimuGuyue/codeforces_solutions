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
    std::vector<int> coin(n + 1);
    for (int i(1); i <= n; ++i)
    {
        std::cin >> coin[i];
    }
    
    int l(0), r(0);
    for (int i(1); i <= n; ++i)
    {
        if (coin[i] != i)
        {   
            int j(coin[i]);
            l = i;
            r = j;
            while (i < j)
            {
                std::swap(coin[i], coin[j]);
                ++i;
                --j;
            }
            break;
        }
    }

    for(int i(1); i < n; ++i)
    {
        if (coin[i] != i)
        {
            std::cout << 0 << " " << 0 << std::endl;
            return;
        }
    }
    std::cout << l << " " << r << std::endl;
}