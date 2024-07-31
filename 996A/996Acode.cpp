#include <iostream>

int Hit_the_Lottery(int n);

int main(void)
{
	int n;
	std::cin >> n;
	std::cout << Hit_the_Lottery(n) << std::endl;
	return 0;
}

int Hit_the_Lottery(int n)
{
	int count = 0;
	count += n / 100;
	n %= 100;
	count += n / 20;
	n %= 20;
	count += n / 10;
	n %= 10;
	count += n / 5;
	n %= 5;
	count += n;
	return count;
}