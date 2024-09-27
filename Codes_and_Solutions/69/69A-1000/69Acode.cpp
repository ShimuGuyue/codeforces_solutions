#include <iostream>
#include <vector>

bool Young_Physicist(std::vector<int> x, std::vector<int> y, std::vector<int> z)
{
	int forcesX = 0;
	for (std::vector<int>::iterator it(x.begin()); it != x.end(); ++it)
	{
		forcesX += *it;
	}
	int forcesY = 0;
	for (std::vector<int>::iterator it(y.begin()); it != y.end(); ++it)
	{
		forcesY += *it;
	}
	int forcesZ = 0;
	for (std::vector<int>::iterator it(z.begin()); it != z.end(); ++it)
	{
		forcesZ += *it;
	}
	if (forcesX == 0 && forcesY == 0 && forcesZ == 0)
		return true;
	else
		return false;
}

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> x;
	std::vector<int> y;
	std::vector<int> z;
	while (n--)
	{
		int tempX, tempY, tempZ;
		std::cin >> tempX >> tempY >> tempZ;
		x.push_back(tempX);
		y.push_back(tempY);
		z.push_back(tempZ);
	}
	if (Young_Physicist(x, y, z))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}
