#include <iostream>
#include <string>
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
	std::string s1;
	getline(std::cin, s1);
	std::map<char, int> letters;
	for (char c : s1)
	{
		if (c != ' ')
			++letters[c];
	}
	std::string s2;
	getline(std::cin, s2);
	for (char c : s2)
	{
		if (c == ' ')
			continue;
		if (letters.find(c) == letters.end())
		{
			std::cout << "NO" << std::endl;
			return;
		}
		if (letters[c] == 0)
		{
			std::cout << "NO" << std::endl;
			return;
		}
		--letters[c];
	}
	std::cout << "YES" << std::endl;
}