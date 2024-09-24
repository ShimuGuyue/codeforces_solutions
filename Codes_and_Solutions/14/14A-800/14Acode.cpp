#include <iostream>
#include <vector>

void Letter();

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Letter();
		//std::cout << std::endl;
	}
	return 0;
}

void Letter()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> grid(n);
	for (std::string& s : grid)
	{
		std::cin >> s;
	}
#
	int x1, y1, x2, y2;
	for (int i(0); i < n; ++i)
	{
		bool found(false);
		for (int j(0); j < m; ++j)
		{
			if (grid[i][j] == '*')
			{
				y1 = i;
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
	for (int j(0); j < m; ++j)
	{
		bool found(false);
		for (int i(0); i < n; ++i)
		{
			if (grid[i][j] == '*')
			{
				x1 = j;
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
	for (int i(n - 1); i >= 0; --i)
	{
		bool found(false);
		for (int j(m - 1); j >= 0; --j)
		{
			if (grid[i][j] == '*')
			{
				y2 = i;
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
	for (int j(m - 1); j >= 0; --j)
	{
		bool found(false);
		for (int i(n - 1); i >= 0; --i)
		{
			if (grid[i][j] == '*')
			{
				x2 = j;
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
#
	for (int i(y1); i <= y2; ++i)
	{
		for (int j(x1); j <= x2; ++j)
		{
			std::cout << grid[i][j];
		}
		std::cout << std::endl;
	}
}