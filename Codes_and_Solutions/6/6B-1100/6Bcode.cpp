#include <iostream>
#include <vector>
#include <map>

void President_s_Office();

int main(void)
{
	President_s_Office();
	return 0;
}

void President_s_Office()
{
	int n, m;
	char c;
	std::cin >> n >> m >> c;
	std::vector<std::string> room(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> room[i];
	}
#
	std::map<char, int> counts;
	for (int i(0); i < n; ++i)
	{
		for (int j(0); j < m; ++j)
		{
			if (room[i][j] == '.' || room[i][j] == c)
				continue;
			if (i != 0 && room[i - 1][j] == c)
				++counts[room[i][j]];
			if (i != n - 1 && room[i + 1][j] == c)
				++counts[room[i][j]];
			if (j != 0 && room[i][j - 1] == c)
				++counts[room[i][j]];
			if (j != m - 1 && room[i][j + 1] == c)
				++counts[room[i][j]];
		}
	}
#
	std::cout << counts.size();
}