#include <iostream>

void Game_23();

int main(void)
{
	Game_23();
	return 0;
}

void Game_23()
{
	int n, m;
	std::cin >> n >> m;
	if (m % n)
	{
		std::cout << -1 << std::endl;
		return;
	}
	m /= n;
	int count(0);
	while (m % 2 == 0)
	{
		m /= 2;
		++count;
	}
	while (m % 3 == 0)
	{
		m /= 3;
		++count;
	}
	if (m == 1)
		std::cout << count << std::endl;
	else
		std::cout << -1 << std::endl;
}