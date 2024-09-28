#include <iostream>
int main(void)
{
	int n;
	std::cin >> n;
	while (n--)
	{
		std::string word;
		std::cin >> word;
		if (word.length() > 10)
		{
			std::cout << word.front() << word.length() - 2 << word.back() << std::endl;
		}
		else
		{
			std::cout << word << std::endl;
		}
		//std::cout << std::endl;
	}
	return 0;
}