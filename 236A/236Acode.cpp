#include <iostream>
#include <map>
int main(void)
{
	std::string s;
	std::cin >> s;
	std::map<char, int> chars;
	for (std::string::iterator itS = s.begin(); itS != s.end(); ++itS)
	{
		++chars[*itS];
	}
	if (chars.size() % 2 == 0)
		std::cout << "CHAT WITH HER!" << std::endl;
	else
		std::cout << "IGNORE HIM!" << std::endl;
	return 0;
}