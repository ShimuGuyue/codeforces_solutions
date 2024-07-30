#include <iostream>
#include <string>

bool nearlyLuckyNumber(std::string s);

int main(void)
{
	std::string number;
	std::cin >> number;
	if (nearlyLuckyNumber(number))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}

bool nearlyLuckyNumber(std::string s)
{
	int countLuckyNumber(0);
	for (std::string::iterator it(s.begin()); it != s.end(); ++it)
	{
		if (*it == '4' || *it == '7')
			++countLuckyNumber;
	}
	std::string tostrCountLuckyNumber(std::to_string(countLuckyNumber));
	for (std::string::iterator it(tostrCountLuckyNumber.begin()); it != tostrCountLuckyNumber.end(); ++it)
	{
		if (*it != '4' && *it != '7')
			return false;
	}
	return true;
}