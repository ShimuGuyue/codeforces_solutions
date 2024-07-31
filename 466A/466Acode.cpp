#include <iostream>

int Cheap_Travel(int n, int m, int a, int b);

int main(void)
{
	int n, m, a, b;
	std::cin >> n >> m >> a >> b;
	std::cout << Cheap_Travel(n, m, a, b) << std::endl;
	return 0;
}

int Cheap_Travel(int n, int m, int a, int b)
{
	if (b >= a * m)
		return n * a;
	int more(n / m);
	int only(n % m);
	if (only != 0)
		return std::min(more * b + only * a, (more + 1) * b);
	return more * b + only * a;
}