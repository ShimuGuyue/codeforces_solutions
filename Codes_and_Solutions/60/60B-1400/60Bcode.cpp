#include <iostream>
#include <vector>

void dfs(int x, int y, int z, int k, int n, int m, int& ans, std::vector<std::vector<std::string>>& plates);
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
    int k, n, m;
    std::cin >> k >> n >> m;
    std::vector<std::vector<std::string>> plates(k, std::vector<std::string>(n));
    for (std::vector<std::string>& vs : plates)
    {
        for (std::string& s : vs)
        {
            std::cin >> s;
        }
    }
    int x, y;
    std::cin >> x >> y;
    --x; --y;
    int ans(0);
    dfs(0, x, y, k, n, m, ans, plates);
    std::cout << ans << std::endl;
}

void dfs(int x, int y, int z, int k, int n, int m, int& ans, std::vector<std::vector<std::string>>& plates)
{
    ++ans;
    plates[x][y][z] = '#';
    if (x != 0 && plates[x - 1][y][z] != '#')
        dfs(x - 1, y, z, k, n, m, ans, plates);
    if (x != k - 1 && plates[x + 1][y][z] != '#')
        dfs(x + 1, y, z, k, n, m, ans, plates);
    if (y != 0 && plates[x][y - 1][z] != '#')
        dfs(x, y - 1, z, k, n, m, ans, plates);
    if (y != n - 1 && plates[x][y + 1][z] != '#')
        dfs(x, y + 1, z, k, n, m, ans, plates);
    if (z != 0 && plates[x][y][z - 1] != '#')
        dfs(x, y, z - 1, k, n, m, ans, plates);
    if (z != m - 1 && plates[x][y][z + 1] != '#')
        dfs(x, y, z + 1, k, n, m, ans, plates);
}