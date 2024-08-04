#include <iostream>
#include <string>

void Strong_Password();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Strong_Password();
		//std::cout << std::endl;
	}
	return 0;
}

void Strong_Password()
{
	std::string s;
	std::cin >> s;
	if (s.size() == 1)
		for (char c('a'); c <= 'z'; ++c)
		{
			if (c != s.front())
			{
				s += c;
				std::cout << s << std::endl;
				return;
			}
		}
	for (int i(1); i < s.size(); ++i)
	{
		if (s[i - 1] == s[i])
			for (char c('a'); c <= 'z'; ++c)
			{
				if (c != s[i])
				{
					std::string temp;
					temp += c;
					s.insert(i, temp);
					std::cout << s << std::endl;
					return;
				}
			}
	}
	for (char c('a'); c <= 'z'; ++c)
	{
		if (c != s.back())
		{
			s += c;
			std::cout << s << std::endl;
			return;
		}
	}
}