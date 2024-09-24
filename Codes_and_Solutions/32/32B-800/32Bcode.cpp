#include <iostream>

std::string Borze(std::string s);

int main(void)
{
	std::string borze;
	std::cin >> borze;
	std::cout << Borze(borze) << std::endl;
	return 0;
}

std::string Borze(std::string s)
{
	std::string ans;
	for (std::string::iterator it(s.begin()); it != s.end(); )
	{
		if (*it == '.')
		{
			ans += "0";
			++it;
		}
		else if (*it == '-' && it != s.end() - 1)
		{
			if (*(it + 1) == '.')
				ans += "1";
			else if (*(it + 1) == '-')
				ans += "2";
			++it; ++it;
		}
	}
	return ans;
}