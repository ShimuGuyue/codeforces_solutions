#include <iostream>

bool YES_or_YES_(std::string s);

int main(void)
{
	int n;
	std::cin >> n;
	while (n--)
	{
		std::string yes;
		std::cin >> yes;
		if (YES_or_YES_(yes))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}

bool YES_or_YES_(std::string s)
{
	if (s[0] != 'Y' && s[0] != 'y')
		return false;
	if (s[1] != 'E' && s[1] != 'e')
		return false;
	if (s[2] != 'S' && s[2] != 's')
		return false;
	return true;
}