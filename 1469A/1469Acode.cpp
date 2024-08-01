#include <iostream>

void Regular_Bracket_Sequence();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Regular_Bracket_Sequence();
		std::cout << std::endl;
	}
	return 0;
}

void Regular_Bracket_Sequence()
{
	std::string s;
	std::cin >> s;
	if (s.size() % 2)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (s.front() == ')')
		std::cout << "NO" << std::endl;
	else if (s.back() == '(')
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
}