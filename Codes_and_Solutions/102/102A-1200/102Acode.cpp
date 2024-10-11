#include <iostream>
#include <limits.h>
#include <vector>

bool is_find(std::vector<int>& vi, int n);

int main(void)
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> prices(n + 1);
    for (int i(1); i <= n; ++i)
    {
        std::cin >> prices[i];
    }
    std::vector<std::vector<int>> matches(n + 1);
    while (m--)
    {
        int u, v;
        std::cin >> u >> v;
        if (u > v)
            std::swap(u, v);
        matches[u].push_back(v);
    }

    int ans(INT_MAX);
    for (int i(1); i <= n; ++i)
    {
        for (int j(0); j < matches[i].size(); ++j)
        {
            for (int k(j + 1); k < matches[i].size(); ++k)
            {   
                // 循环嵌套尽量不要超过三层
                if (is_find(matches[matches[i][j]], matches[i][k]))
                {
                    int sum(prices[i] + prices[matches[i][j]] + prices[matches[i][k]]);
                    ans = std::min(ans, sum);
                }
            }
        }
    }

    std::cout << (ans == INT_MAX ? -1 : ans) << std::endl;

    return 0;
}

bool is_find(std::vector<int>& vi, int n)
{
    for (int i : vi)
    {
        if (i == n)
            return true;
    }
    return false;
}