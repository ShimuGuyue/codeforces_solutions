#include <iostream>

void Game_With_Sticks(int n, int m);

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	Game_With_Sticks(n, m);
	return 0;
}

void Game_With_Sticks(int n, int m)
{
	if (std::min(n, m) % 2 == 0)
		std::cout << "Malvika";
	else
		std::cout << "Akshat";
	return;
}