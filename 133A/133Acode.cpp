#include <iostream>

bool HQ9_(std::string s);

int main(void)
{
	std::string p;;
	std::cin >> p;
	if (HQ9_(p))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}

bool HQ9_(std::string s)
{
	for (std::string::iterator it(s.begin()); it != s.end(); ++it)
	{
		if (*it == 'H' || *it == 'Q' || *it == '9')
			return true;
	}
	return false;
}