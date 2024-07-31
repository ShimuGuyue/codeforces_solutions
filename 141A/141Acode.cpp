#include <iostream>
#include <vector>

bool Amusing_Joke(std::string s1, std::string s2, std::string s3);

int main(void)
{
	std::string guest, host, letter;
	std::cin >> guest >> host >> letter;
	if (Amusing_Joke(guest, host, letter))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}

bool Amusing_Joke(std::string s1, std::string s2, std::string s3)
{
	std::vector<int> name(26), letter(26);
	for (std::string::iterator it(s1.begin()); it != s1.end(); ++it)
	{
		++name[*it - 'A'];
	}
	for (std::string::iterator it(s2.begin()); it != s2.end(); ++it)
	{
		++name[*it - 'A'];
	}
	for (std::string::iterator it(s3.begin()); it != s3.end(); ++it)
	{
		++letter[*it - 'A'];
	}
	for (std::vector<int>::iterator itName(name.begin()), itLetter(letter.begin());
		itName != name.end() && itLetter != letter.end();
		++itName, ++itLetter)
	{
		if (*itName != *itLetter)
			return false;
	}
	return true;
}