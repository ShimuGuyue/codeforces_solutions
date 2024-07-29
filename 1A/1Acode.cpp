#include <iostream>
int main(void)
{
	int n, m, a;
	std::cin >> n >> m >> a;
	long long x = n % a == 0 ? n / a : n / a + 1;
	long long y = m % a == 0 ? m / a : m / a + 1;
	long long ans = x * y;
	std::cout << ans << std::endl;
	return 0;
}