#include <iostream>

bool isVowels(char c);

int main(void)
{
	std::string s;
	std::cin >> s;
	for (std::string::iterator it = s.begin(); it != s.end(); ++it)
	{
		if (isVowels(*it))
			continue;
		else
			std::cout << '.' << static_cast<char>(tolower(*it));
	}
	std::cout << std::endl;
	return 0;
}

bool isVowels(char c)
{
	switch (c)
	{
	case 'A':
	case 'a':
	case 'O':
	case 'o':
	case 'Y':
	case 'y':
	case 'E':
	case 'e':
	case 'U':
	case 'u':
	case 'I':
	case 'i':
		return true;
	default:
		return false;
	}
}