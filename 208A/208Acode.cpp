#include <iostream>

std::string Dubstep(std::string s);

int main(void)
{
	std::string track;
	std::cin >> track;
	std::cout << Dubstep(track) << std::endl;
	return 0;
}

std::string Dubstep(std::string s)
{
	std::string ans;
	bool judgeWord(false);
	for (std::string::iterator it(s.begin()); it != s.end(); ++it)
	{
		if (it != s.end() - 1 && it != s.end() - 2 && *it == 'W' && *(it + 1) == 'U' && *(it + 2) == 'B')
		{
			it += 2;
			if (judgeWord == true)
			{
				ans += ' ';
				judgeWord = false;
			}
		}
		else
		{
			ans += *it;
			judgeWord = true;
		}
	}
	return ans;
}