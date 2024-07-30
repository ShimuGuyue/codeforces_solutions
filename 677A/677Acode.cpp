#include <iostream>
#include <vector>

int Vanya_and_Fence(std::vector<int> a, int h);

int main(void)
{
	int n, h;
	std::cin >> n >> h;
	std::vector<int> height;
	for (int i(1); i <= n; ++i)
	{
		int tempHeight;
		std::cin >> tempHeight;
		height.push_back(tempHeight);
	}
	std::cout << Vanya_and_Fence(height, h) << std::endl;
	return 0;
}

int Vanya_and_Fence(std::vector<int> a, int h)
{
	int count = 0;
	for (std::vector<int>::iterator it(a.begin()); it != a.end(); ++it)
	{
		if (*it > h)
			count += 2;
		else
			count += 1;
	}
	return count;
}