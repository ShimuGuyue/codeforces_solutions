#include <iostream>

void A_B_Again_();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		A_B_Again_();
		//std::cout << std::endl;
	}
	return 0;
}

void A_B_Again_()
{
	std::string n;
	std::cin >> n;
	int ans(0);
	for (char c : n)
	{
		ans += c - '0';
	}
	std::cout << ans << std::endl;
}