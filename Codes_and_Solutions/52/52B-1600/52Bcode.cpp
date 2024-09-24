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
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> grid(n);
    for (std::string& s : grid)
    {
        std::cin >> s;
    }
    std::vector<int> rows(n);
    std::vector<int> cols(m);
    for (int i(0); i < n; ++i)
    {
        for (int j(0); j < m; ++j)
        {
            if (grid[i][j] == '*')
            {
                ++rows[i];
                ++cols[j];
            }
        }
    }
    int64_t ans(0);
    for (int i(0); i < n; ++i)
    {
        for (int j(0); j < m; ++j)
        {
            if (grid[i][j] == '*')
                ans += (rows[i] - 1) * (cols[j] - 1); 
        }
    }
    std::cout << ans << std::endl;
}