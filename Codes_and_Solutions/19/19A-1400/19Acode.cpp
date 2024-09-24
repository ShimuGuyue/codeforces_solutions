#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

#define DEBUG 0

#if !DEBUG

struct team
{
	std::string name;
	int score{ 0 };
	int positive{ 0 };
	int negative{ 0 };
};

void World_Football_Cup(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		World_Football_Cup();
		//std::cout << std::endl;
	}
	return 0;
}

void World_Football_Cup(void)
{
	int n;
	std::cin >> n;
	std::map<std::string, team> teams;
	for (int i(0); i < n; i++)
	{
		std::string name;
		std::cin >> name;
		teams.insert({ name, { name, 0, 0, 0 } });
	}
	for (int i(0); i < n * (n - 1) / 2; ++i)
	{
		std::string camp;
		std::string contrast;
		std::cin >> camp >> contrast;
		bool is1(true);
		std::string team1;
		std::string team2;
		for (char c : camp)
		{
			if (is1)
				if (c == '-')
					is1 = false;
				else
					team1 += c;
			else
				team2 += c;
		}
		is1 = true;
		std::string goal1;
		std::string goal2;
		for (char c : contrast)
		{
			if (is1)
				if (c == ':')
					is1 = false;
				else
					goal1 += c;
			else
				goal2 += c;
		}
		int score1(stoi(goal1));
		int score2(stoi(goal2));
		teams[team1].score += (score1 > score2 ? 3 : (score1 == score2 ? 1 : 0));
		teams[team1].positive += score1;
		teams[team1].negative += score2;
		teams[team2].score += (score2 > score1 ? 3 : (score2 == score1 ? 1 : 0));
		teams[team2].positive += score2;
		teams[team2].negative += score1;
	}
	std::vector<team> ans;
	for (std::pair<std::string, team> st : teams)
	{
		ans.push_back(st.second);
	}
	std::sort(ans.begin(), ans.end(), [](team a, team b) {
		if (a.score != b.score)
			return a.score > b.score;
		if (a.positive - a.negative != b.positive - b.negative)
			return a.positive - a.negative > b.positive - b.negative;
		if (a.positive != b.positive)
			return a.positive > b.positive;
		return a.negative < b.negative;
		});
	std::sort(ans.begin(), ans.begin() + n / 2, [](team a, team b) {
		return a.name < b.name;
		});
	for (int i(0); i < n / 2; ++i)
	{
		std::cout << ans[i].name << std::endl;
	}
}

#else

#endif