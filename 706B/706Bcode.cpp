#include <iostream>
#include <vector>
#include <map>

int Interesting_drink(std::map<int, int>& dp, int n, int max);

int main()
{
    std::map<int, int> shops;

    int n;
    std::cin >> n;
    int max(0);
    for (int i(1); i <= n; i++)
    {
        int x;
        std::cin >> x;
        if (x > max)
            max = x;
        ++shops[x];
    }
    std::map<int, int> count;
    count[1] = shops[1];
    for (int j = 2; j <= max; j++)
    {
        count[j] = count[j - 1] + shops[j];
    }
    int q;
    std::cin >> q;
    while (q--)
    {
        int m;
        std::cin >> m;
        std::cout << Interesting_drink(count, m, max) << std::endl;
    }
    return 0;
}

int Interesting_drink(std::map<int, int>& dp, int n, int max)
{
    if (n >= max)
        return dp[max];
    return dp[n];
}