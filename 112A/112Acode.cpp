#include <iostream>
#include <cctype>
int main(void)
{
	std::string a;
	std::string b;
	std::cin >> a;
	std::cin >> b;
	for (std::string::iterator it(a.begin()); it != a.end(); ++it)
		*it = tolower(*it);
	for (std::string::iterator it(b.begin()); it != b.end(); ++it)
		*it = tolower(*it);
	if (a > b)
		std::cout << 1 << std::endl;
	else if (a == b)
		std::cout << 0 << std::endl;
	else if (a < b)
		std::cout << -1 << std::endl;
	return 0;
}