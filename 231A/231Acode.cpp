#include <iostream>
int main(void)
{
	int n;
	std::cin >> n;
	int ans(0);
	while (n--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;
		int sum(a + b + c);
		if (sum >= 2)
			++ans;
	}
	std::cout << ans << std::endl;
	return 0;
}