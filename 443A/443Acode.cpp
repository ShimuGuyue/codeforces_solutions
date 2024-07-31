#include <iostream>
#include <map>
#include <string>

int Anton_and_Letters(std::string s);

int main(void)
{
	std::string set;
	getline(std::cin, set);
	std::cout << Anton_and_Letters(set) << std::endl;
	return 0;
}

int Anton_and_Letters(std::string s)
{
	std::map<char, int> counts;
	for (char c : s)
	{
		if (islower(c))
			++counts[c];
	}
	return counts.size();
}