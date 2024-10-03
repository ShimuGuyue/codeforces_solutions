#include <iostream>
#include <vector>
#include <algorithm>

void solve(std::vector<std::pair<int, int>> &wastes, int m);

int main(void)
{
    int n, m, k, t;
    std::cin >> n >> m >> k >> t;
    std::vector<std::pair<int, int>> wastes;
    while (k--)
    {
        int a, b;
        std::cin >> a >> b;
        wastes.push_back({a, b});
    }
    std::sort(wastes.begin(), wastes.end(), [](std::pair<int, int> a, std::pair<int, int> b)
    {
        if (a.first != b.first)
            return a.first < b.first;
        return a.second < b.second; 
    });
    while (t--)
    {
        solve(wastes, m);
    }
    return 0;
}

void solve(std::vector<std::pair<int, int>> &wastes, int m)
{
    int i, j;
    std::cin >> i >> j;
    int waste(0);
    for (std::pair<int, int> ii : wastes)
    {
        if ((ii.first < i) || (ii.first == i && ii.second < j))
            ++waste;
        else if (ii.first == i && ii.second == j)
        {
            std::cout << "Waste" << std::endl;
            return;
        }
        else
            break;
    }

    int loc((i - 1) * m + j);
    loc -= waste;
    int mod(loc % 3);

    if (mod == 0)
        std::cout << "Grapes" << std::endl;
    else if (mod == 1)
        std::cout << "Carrots" << std::endl;
    else if (mod == 2)
        std::cout << "Kiwis" << std::endl;
}