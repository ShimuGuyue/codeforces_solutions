#include <iostream>
#include <vector>
#include <algorithm>

int The_New_Year__Meeting_Friends(std::vector<int> vi);

int main(void)
{
	int n(3);
	std::vector<int> x;
	while (n--)
	{
		int tempX;
		std::cin >> tempX;
		x.push_back(tempX);
	}
	std::cout << The_New_Year__Meeting_Friends(x) << std::endl;
	return 0;
}

int The_New_Year__Meeting_Friends(std::vector<int> vi)
{
	sort(vi.begin(), vi.end());
	return vi.back() - vi.front();
}