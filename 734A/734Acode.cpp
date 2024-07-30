#include <iostream>

std::string AntonAndDanik(std::string s, int n);

int main(void)
{
	int n;
	std::cin >> n;
	std::string games;
	std::cin >> games;
	std::cout << AntonAndDanik(games, n) << std::endl;
	return 0;
}

std::string AntonAndDanik(std::string s, int n)
{
	int countA(0);
	int countD(0);
	for (std::string::iterator it(s.begin()); it != s.end(); ++it)
	{
		if (*it == 'A')
			++countA;
		else if (*it == 'D')
			++countD;
		if (countA > n / 2)
			return "Anton";
		if (countD > n / 2)
			return "Danik";
	}
	return "Friendship";
}