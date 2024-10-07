#include <iostream>

bool football(std::string s)
{
	int countAdj(1);
	for (std::string::iterator it(s.begin() + 1); it != s.end(); ++it)
	{
		if (*it == *(it - 1))
			++countAdj;
		else
			countAdj = 1;
		if (countAdj == 7)
			return true;
	}
	return false;
}

int main(void)
{
	std::string s;
	std::cin >> s;
	if (football(s))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}