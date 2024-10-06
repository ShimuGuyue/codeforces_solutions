#include <iostream>
#include <vector>

int main(void)
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> grid(n);
    for (std::string& s : grid)
    {
        std::cin >> s;
    }
    for (int i(0); i < n; ++i)
    {
        for (int j(0); j < m; ++j)
        {
            bool find(false);

            for (int p(0); p < n; ++p)
            {
                if (p == i)
                    continue;
                if (grid[i][j] == grid[p][j])
                {
                    find = true;
                    break;
                }
            }
            if (find)
                continue;
            for (int q(0); q < m; ++q)
            {
                if (q == j)
                    continue;
                if (grid[i][j] == grid[i][q])
                {
                    find = true;
                    break;
                }
            }
            if (find)
                continue;
            std::cout << grid[i][j];
        }
    }
    std::cout << std::endl;
    return 0;
}