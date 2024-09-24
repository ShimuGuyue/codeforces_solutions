#include <iostream>
#include <vector>
#include <algorithm>

int Sale(std::vector<int>, int);

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> TVs;
	while (n--)
	{
		int tempTV;
		std::cin >> tempTV;
		TVs.push_back(tempTV);
	}
	std::cout << Sale(TVs, m) << std::endl;
	return 0;
}

int Sale(std::vector<int> vi, int n)
{
	sort(vi.begin(), vi.end());
	int sum(0);
	for (int i(0); i < n; ++i)
	{
		if (vi[i] < 0)
			sum -= vi[i];
		else
			break;
	}
	return sum;
}