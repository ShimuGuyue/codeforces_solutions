#include <iostream>
#include <vector>

int I_love__username_(std::vector<int> vi);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> performances;
	while (n--)
	{
		int tempPerformances;
		std::cin >> tempPerformances;
		performances.push_back(tempPerformances);
	}
	std::cout << I_love__username_(performances) << std::endl;
	return 0;
}

int I_love__username_(std::vector<int> vi)
{
	int min(vi.front());
	int max(vi.front());
	int countAmazing(0);
	for (std::vector<int>::iterator it(vi.begin() + 1); it != vi.end(); ++it)
	{
		if (*it > max)
		{
			max = *it;
			++countAmazing;
		}
		else if (*it < min)
		{
			min = *it;
			++countAmazing;
		}
	}
	return countAmazing;
}