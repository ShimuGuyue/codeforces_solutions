#include <iostream>
#include <map>
#include <queue>

void Winner();

int main(void)
{
	Winner();
	return 0;
}

void Winner()
{
	int n;
	std::cin >> n;
	std::map<std::string, int> records;
	std::queue<std::pair<std::string, int>> rounds;
	while (n--)
	{
		std::string name;
		int score;
		std::cin >> name >> score;
		records[name] += score;
		rounds.push({ name, score });
	}
	int max(INT_MIN);
	for (std::pair<std::string, int> si : records)
	{
		max = std::max(max, si.second);
	}
	std::map<std::string, int> records1;
	while (!rounds.empty())
	{
		records1[rounds.front().first] += rounds.front().second;
		if (records1[rounds.front().first] >= max && records[rounds.front().first] == max)
		{
			std::cout << rounds.front().first << std::endl;
			return;
		}
		rounds.pop();
	}
}