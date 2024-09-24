#include <iostream>
#include <vector>
#include <string>

struct name
{
	std::string word;
	int number;
};

std::vector<name> names;

void Registration_system(std::string s);

int main(void)
{
	int n;
	std::cin >> n;
	while (n--)
	{
		std::string name;
		std::cin >> name;
		Registration_system(name);
	}
	return 0;
}

void Registration_system(std::string s)
{
	for (std::vector<name>::iterator it(names.begin()); it != names.end(); ++it)
	{
		if (it->word == s)
		{
			std::cout << it->word << ++it->number << std::endl;
			return;
		}
	}
	names.push_back({ s, 0 });
	std::cout << "OK" << std::endl;
	return;
}