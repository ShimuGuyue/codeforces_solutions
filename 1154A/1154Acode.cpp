#include <iostream>
#include <vector>
#include <algorithm>

void Restoring_Three_Numbers(std::vector<int> vi);

int main(void)
{
	int n(4);
	std::vector<int> integers;
	while (n--)
	{
		int tempIntegers;
		std::cin >> tempIntegers;
		integers.push_back(tempIntegers);
	}
	Restoring_Three_Numbers(integers);
	return 0;
}

void Restoring_Three_Numbers(std::vector<int> vi)
{
	sort(vi.begin(), vi.end());
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end() - 1; ++it)
	{
		std::cout << vi.back() - *it << ' ';
	}
	std::cout << std::endl;
	return;
}