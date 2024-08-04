#include <iostream>
#include <vector>

void Scale(std::vector<std::string> grid, int m);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, m;
		std::cin >> n >> m;
		std::vector<std::string> grid(n);
		for (int i(0); i < n; ++i)
		{
			std::cin >> grid[i];
		}
		Scale(grid, m);
	}
	return 0;
}

void Scale(std::vector<std::string> grid, int m)
{
	for (int i(0); i < grid.size(); i += m)
	{
		for (int j(0); j < grid.size(); j += m)
		{
			std::cout << grid[i][j];
		}
		std::cout << std::endl;
	}
}