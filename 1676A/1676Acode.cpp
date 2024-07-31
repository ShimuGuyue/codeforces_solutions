#include <iostream>

bool Lucky_(std::string s);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		if (Lucky_(s))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}

bool Lucky_(std::string s)
{
	if (s[0] - '0' + s[1] - '0' + s[2] - '0' == s[3] - '0' + s[4] - '0' + s[5] - '0')
		return true;
	return false;
}