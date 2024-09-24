#include <iostream>
#include <vector>

struct team
{
	std::string name{ "" };
	int count{ 1 };
};

std::string Football(std::vector<std::string>& vs);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<std::string> goals;
	while (n--)
	{
		std::string tempGoal;
		std::cin >> tempGoal;
		goals.push_back(tempGoal);
	}
	std::cout << Football(goals) << std::endl;
	return 0;
}

std::string Football(std::vector<std::string>& vs)
{
	std::vector<team> teams;
	for (std::vector<std::string>::iterator itVS(vs.begin()); itVS != vs.end(); ++itVS)
	{
		bool judgeHave(false);
		for (std::vector<team>::iterator itTeams(teams.begin()); itTeams != teams.end(); ++itTeams)
		{
			if (itTeams->name == *itVS)
			{
				++itTeams->count;
				judgeHave = true;
				break;
			}

		}
		if (!judgeHave)
		{
			teams.push_back({ *itVS, 1 });
		}
	}
	std::string ans;
	int max(0);
	for (std::vector<team>::iterator it(teams.begin()); it != teams.end(); ++it)
	{
		if (it->count > max)
		{
			max = it->count;
			ans = it->name;
		}
	}
	return ans;
}