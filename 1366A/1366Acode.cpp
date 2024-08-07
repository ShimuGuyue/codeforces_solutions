#include <iostream>

void Shovels_and_Swords();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Shovels_and_Swords();
		//std::cout << std::endl;
	}
	return 0;
}

void Shovels_and_Swords()
{
	int a, b;
	std::cin >> a >> b;
	int ans(0);
	if (a >= b * 2)
		ans = b;
	else if (b >= a * 2)
		ans = a;
	else if (a == b)
		ans = (a + b) / 3;
	else if (a < b)
	{
		ans = b - a + (a - (b - a)) * 2 / 3;
	}
	else if (a > b)
	{
		ans = a - b + (b - (a - b)) * 2 / 3;
	}
	std::cout << ans << std::endl;
}