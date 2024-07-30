#include <iostream>

int wrongSubtraction(int n, int k);

int main(void)
{
	int n, k;
	std::cin >> n >> k;
	std::cout << wrongSubtraction(n, k) << std::endl;
	return 0;
}

int wrongSubtraction(int n, int k)
{
	while (k--)
	{
		if (n % 10 == 0)
			n /= 10;
		else
			--n;
	}
	return n;
}