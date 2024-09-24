#include <iostream>

void Young_Photographer();

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Young_Photographer();
		//std::cout << std::endl;
	}
	return 0;
}

void Young_Photographer()
{
	int n, x;
	std::cin >> n >> x;
	int l(0), r(1000);
	while (n--)
	{
		int a, b;
		std::cin >> a >> b;
		if (a > b)
			std::swap(a, b);
		l = std::max(a, l);
		r = std::min(b, r);
	}
	if (l > r)
	{
		std::cout << "-1" << std::endl;
		return;
	}
	if (x < l)
		std::cout << l - x << std::endl;
	else if (x > r)
		std::cout << x - r << std::endl;
	else
		std::cout << 0 << std::endl;
}