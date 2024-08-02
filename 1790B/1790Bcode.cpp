#include <iostream>

void Taisia_and_Dice();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Taisia_and_Dice();
		//std::cout << std::endl;
	}
	return 0;
}

void Taisia_and_Dice()
{
	int n, s, r;
	std::cin >> n >> s >> r;
	std::cout << s - r;
	--n;
	int mod(r % n);
	int flag(r / n);
	for (int i(0); i < mod; ++i)
	{
		std::cout << " " << flag + 1;
	}
	for (int i(mod); i < n; ++i)
	{
		std::cout << " " << flag;
	}
	std::cout << std::endl;
}