#include <iostream>
#include <vector>
#include <algorithm>

bool cmpBigToSmall(int a, int b);
int Twins(std::vector<int> vi);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> coins;
	while (n--)
	{
		int tempCoin;
		std::cin >> tempCoin;
		coins.push_back(tempCoin);
	}
	std::cout << Twins(coins) << std::endl;
	return 0;
}

bool cmpBigToSmall(int a, int b)
{
	return a > b;
}

int Twins(std::vector<int> vi)
{
	sort(vi.begin(), vi.end(), cmpBigToSmall);
	int small(0);
	int big(0);
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		small += *it;
	}
	int count(0);
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		big += *it;
		small -= *it;
		++count;
		if (big > small)
			break;
	}
	return count;
}