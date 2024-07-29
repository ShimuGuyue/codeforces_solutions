#include <iostream>
int main(void)
{
	int x;
	std::cin >> x;
	int ans = x % 5 == 0 ? x / 5 : x / 5 + 1;
	std::cout << ans << std::endl;
	return 0;
}