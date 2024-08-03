#include <iostream>
#include <vector>

int Choosing_Teams(std::vector<int>& vi, int k);

int main(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> y;
	while (n--)
	{
		int tempY;
		std::cin >> tempY;
		y.push_back(tempY);
	}
	std::cout << Choosing_Teams(y, k);
	return 0;
}

int Choosing_Teams(std::vector<int>& vi, int k)
{
	int ok(0);
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		if (*it + k <= 5)
			++ok;
	}
	return ok / 3;
}