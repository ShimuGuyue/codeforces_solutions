#include <iostream>
#include <vector>

int Holiday_Of_Equality(std::vector<int>& vi);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> welfare;
	while (n--)
	{
		int tempWelfare;
		std::cin >> tempWelfare;
		welfare.push_back(tempWelfare);
	}
	std::cout << Holiday_Of_Equality(welfare) << std::endl;
	return 0;
}

int Holiday_Of_Equality(std::vector<int>& vi)
{
	int max(0);
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		max = std::max(max, *it);
	}
	int dif(0);
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		dif += max - *it;
	}
	return dif;
}