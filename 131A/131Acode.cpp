#include <iostream>

std::string cAPS_lOCK(std::string s);

int main(void)
{
	std::string word;
	std::cin >> word;
	std::cout << cAPS_lOCK(word) << std::endl;
	return 0;
}

std::string cAPS_lOCK(std::string s)
{
	int judgeChange = true;
	for (std::string::iterator it(s.begin() + 1); it != s.end(); ++it)
	{
		if (islower(*it))
		{
			judgeChange = false;
			break;
		}
	}
	if (judgeChange)
		for (std::string::iterator it(s.begin()); it != s.end(); ++it)
		{
			if (islower(*it))
				*it = toupper(*it);
			else if (isupper(*it))
				*it = tolower(*it);
		}
	return s;
}