#include <iostream>
#include <vector>

int Magnets(std::vector<std::string> vs);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<std::string> magnets;
	while (n--)
	{
		std::string tempMagnet;
		std::cin >> tempMagnet;
		magnets.push_back(tempMagnet);
	}
	std::cout << Magnets(magnets) << std::endl;
	return 0;
}

int Magnets(std::vector<std::string> vs)
{
	int count(1);
	for (std::vector<std::string>::iterator it(vs.begin() + 1); it != vs.end(); ++it)
	{
		if (*it != *(it - 1))
			++count;
	}
	return count;
}