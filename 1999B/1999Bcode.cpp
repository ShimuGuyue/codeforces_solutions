#include <iostream>

void Card_Game();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Card_Game();
		//std::cout << std::endl;
	}
	return 0;
}

void Card_Game()
{
	int a1, a2, b1, b2;
	std::cin >> a1 >> a2 >> b1 >> b2;
	int ans(0);
	if (a1 > b1 && a2 >= b2)
		++ans;
	if (a1 > b2 && a2 >= b1)
		++ans;
	if (a2 > b1 && a1 >= b2)
		++ans;
	if (a2 > b2 && a1 >= b1)
		++ans;
	if (a1 == b1 && a2 > b2)
		++ans;
	if (a1 == b2 && a2 > b1)
		++ans;
	if (a2 == b1 && a1 > b2)
		++ans;
	if (a2 == b2 && a1 > b1)
		++ans;
	std::cout << ans << std::endl;
}