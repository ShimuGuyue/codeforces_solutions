#include <iostream>
#include <vector>

bool Pangram(std::string s);

int main(void)
{
	int n;
	std::cin >> n;
	std::string sentence;
	std::cin >> sentence;
	if (Pangram(sentence))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}

bool Pangram(std::string s)
{
	std::vector<int> letters(26);
	for (std::string::iterator it(s.begin()); it != s.end(); ++it)
	{
		if (isupper(*it))
			letters[*it - 'A'] = 1;
		else if (islower(*it))
			letters[*it - 'a'] = 1;
	}
	for (std::vector<int>::iterator it = letters.begin(); it != letters.end(); ++it)
	{
		if (*it != 1)
			return false;
	}
	return true;
}