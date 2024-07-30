#include <iostream>
#include <map>

void Image();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Image();
		//std::cout << std::endl;
	}
	return 0;
}

void Image()
{
	std::string row1;
	std::string row2;
	std::cin >> row1;
	std::cin >> row2;
	std::map<char, int> counts;
	for (char c : row1)
	{
		++counts[c];
	}
	for (char c : row2)
	{
		++counts[c];
	}
	if (counts.size() == 1)
		std::cout << 0 << std::endl;
	else if (counts.size() == 2)
		std::cout << 1 << std::endl;
	else if (counts.size() == 3)
		std::cout << 2 << std::endl;
	else if (counts.size() == 4)
		std::cout << 3 << std::endl;
}
