#include <iostream>

void Exciting_Bets();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Exciting_Bets();
		//std::cout << std::endl;
	}
	return 0;
}

void Exciting_Bets()
{
	long long a, b;
	std::cin >> a >> b;
	if (a < b)
		std::swap(a, b);
	long long dif(a - b);
	if (dif == 0)
		std::cout << 0 << " " << 0 << std::endl;
	else
		std::cout << dif << " " << std::min(b % dif, dif - b % dif) << std::endl;
}