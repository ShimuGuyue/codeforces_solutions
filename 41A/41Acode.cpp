#include <iostream>

bool translation(std::string a, std::string b);

int main(void)
{
	std::string a;
	std::string b;
	std::cin >> a >> b;
	if (translation(a, b))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}

bool translation(std::string a, std::string b)
{
	if (a.size() != b.size())
		return false;
	std::string::iterator itA(a.begin());
	std::string::reverse_iterator itB(b.rbegin());
	while (itA != a.end() && itB != b.rend())
	{
		if (*itA != *itB)
			return false;
		++itA;
		++itB;
	}
	return true;
}