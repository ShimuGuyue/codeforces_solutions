#include <iostream>
#include <vector>

int Games(std::vector<int> viA, std::vector<int> viB);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> h, a;
	while (n--)
	{
		int tempH, tempA;
		std::cin >> tempH >> tempA;
		h.push_back(tempH);
		a.push_back(tempA);
	}
	std::cout << Games(h, a) << std::endl;
	return 0;
}

int Games(std::vector<int> viA, std::vector<int> viB)
{
	int count(0);
	for (std::vector<int>::iterator itA(viA.begin()); itA != viA.end(); ++itA)
	{
		for (std::vector<int>::iterator itB(viB.begin()); itB != viB.end(); ++itB)
		{
			if (*itA == *itB)
				++count;
		}
	}
	return count;
}