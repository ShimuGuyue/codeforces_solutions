#include <iostream>
int main(void)
{
	std::string word;
	std::cin >> word;
	int countUp(0);
	int countLow(0);
	for (std::string::iterator it(word.begin()); it != word.end(); ++it)
	{
		if (isupper(*it))
			++countUp;
		else if (islower(*it))
			++countLow;
	}

	if (countLow >= countUp)
		for (std::string::iterator it(word.begin()); it != word.end(); ++it)
			*it = tolower(*it);
	else
		for (std::string::iterator it(word.begin()); it != word.end(); ++it)
			*it = toupper(*it);
	std::cout << word << std::endl;
	return 0;
}