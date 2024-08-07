#include <iostream>

void Mahmoud_and_Longest_Uncommon_Subsequence();

int main(void)
{
	Mahmoud_and_Longest_Uncommon_Subsequence();
	return 0;
}

void Mahmoud_and_Longest_Uncommon_Subsequence()
{
	std::string a;
	std::string b;
	std::cin >> a;
	std::cin >> b;
	if (a == b)
		std::cout << -1 << std::endl;
	else
		std::cout << std::max(a.size(), b.size()) << std::endl;
}