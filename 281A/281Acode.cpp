#include <iostream>
int main(void)
{
	std::string s;
	std::cin >> s;
	s.front() = toupper(s.front());
	std::cout << s << std::endl;
	return 0;
}