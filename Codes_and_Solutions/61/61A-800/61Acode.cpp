#include <iostream>
#include <string>

std::string Ultra__Fast_Mathematician(std::string s1, std::string s2);

int main(void)
{
	std::string s1, s2;
	std::cin >> s1 >> s2;
	std::cout << Ultra__Fast_Mathematician(s1, s2) << std::endl;
	return 0;
}

std::string Ultra__Fast_Mathematician(std::string s1, std::string s2)
{
	std::string ans;
	for (std::string::iterator it1(s1.begin()), it2(s2.begin()); it1 != s1.end() && it2 != s2.end(); ++it1, ++it2)
	{
		if (*it1 == *it2)
			ans.push_back('0');
		else
			ans.push_back('1');
	}
	return ans;
}