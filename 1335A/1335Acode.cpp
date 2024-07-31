#include <iostream>

int Candies_and_Two_Sisters(int n);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		std::cout << Candies_and_Two_Sisters(n) << std::endl;
	}
	return 0;
}

int Candies_and_Two_Sisters(int n)
{
	if (n <= 2)
		return 0;
	return n % 2 == 0 ? n / 2 - 1 : n / 2;

}