#include <iostream>

void Vasya_the_Hipster(int a, int b);

int main(void)
{
	int a, b;
	std::cin >> a >> b;
	Vasya_the_Hipster(a, b);
	return 0;
}

void Vasya_the_Hipster(int a, int b)
{
	int max(std::max(a, b));
	int min(std::min(a, b));
	int dif(max - min);
	std::cout << min << ' ' << dif / 2 << std::endl;
	return;
}