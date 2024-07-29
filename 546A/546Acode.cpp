#include <iostream>
int main(void)
{
	int k, n, w;
	std::cin >> k >> n >> w;
	int cost = w * (w + 1) / 2 * k;
	if (cost <= n)
		std::cout << 0 << std::endl;
	else
		std::cout << cost - n << std::endl;
	return 0;
}