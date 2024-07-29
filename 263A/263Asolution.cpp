#include <iostream>
#include <cmath>
int main(void)
{
	int x, y;
	for (int i(1); i <= 5; ++i)
	{
		for (int j(1); j <= 5; ++j)
		{
			int temp;
			std::cin >> temp;
			if (temp == 1)
			{
				x = i;
				y = j;
			}
		}
	}
	int ans = abs(x - 3) + abs(y - 3);
	std::cout << ans << std::endl;
	return 0;
}