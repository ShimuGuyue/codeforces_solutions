#include <iostream>
#include <vector>

void Flag();

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Flag();
		//std::cout << std::endl;
	}
	return 0;
}

void Flag()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> flag(n);
	for (std::string& s : flag)
	{
		std::cin >> s;
	}
#
	for (int i(0); i < n; ++i)
	{
		for (int j(1); j < m; ++j)
		{
			if (flag[i][j] != flag[i][j - 1])
			{
				std::cout << "NO" << std::endl;
				return;
			}
		}
	}
#
	for (int i(1); i < n; ++i)
	{
		if (flag[i].front() == flag[i - 1].front())
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
#
	std::cout << "YES" << std::endl;
}