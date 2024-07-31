#include <iostream>

int Insomnia_cure(int k, int l, int m, int n, int d);

int main(void)
{
	int k, l, m, n, d;
	std::cin >> k >> l >> m >> n >> d;
	std::cout << Insomnia_cure(k, l, m, n, d) << std::endl;
	return 0;
}

int Insomnia_cure(int k, int l, int m, int n, int d)
{
	int count = 0;
	for (int i = 1; i <= d; ++i)
	{
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
			++count;
	}
	return count;
}