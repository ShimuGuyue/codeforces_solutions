#include <iostream>
#include <map>

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
	using leave = std::pair<std::string, std::string>;
	int n;
	std::cin >> n;
	std::map<leave, int> leaves;
	while (n--)
	{
		std::string species;
		std::string color;
		std::cin >> species >> color;
		++leaves[{ species, color }];
	}
	std::cout << leaves.size() << std::endl;
}