#include <iostream>
#include <queue>
int main(void)
{
	std::string s;
	std::cin >> s;
	std::priority_queue<char, std::vector<char>, std::greater<char>> sortS;
	for (std::string::iterator it(s.begin()); it != s.end(); ++it)
	{
		if (*it != '+')
			sortS.push(*it);
	}
	while (!sortS.empty())
	{
		std::cout << sortS.top();
		sortS.pop();
		if (!sortS.empty())
			std::cout << '+';
	}
	return 0;
}