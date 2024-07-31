#include <iostream>

int Soft_Drinking(int n, int k, int l, int c, int d, int p, int nl, int np);

int main(void)
{
	int n, k, l, c, d, p, nl, pl;
	std::cin >> n >> k >> l >> c >> d >> p >> nl >> pl;
	std::cout << Soft_Drinking(n, k, l, c, d, p, nl, pl) << std::endl;
	return 0;
}

int Soft_Drinking(int n, int k, int l, int c, int d, int p, int nl, int np)
{
	int sumL(k * l);
	int sumD(c * d);
	int perL(sumL / nl);
	int perP(p / np);
	return std::min(std::min(perL, perP), sumD) / n;
}