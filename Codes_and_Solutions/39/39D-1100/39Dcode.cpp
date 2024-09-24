#include <iostream>

void solve(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		solve();
		//std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
	int x1, y1, z1;
	int x2, y2, z2;
	std::cin >> x1 >> y1 >> z1;
	std::cin >> x2 >> y2 >> z2;
	if (x1 == x2 || y1 == y2 || z1 == z2)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}