#include <iostream>

void DIV_MOD();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		DIV_MOD();
		//std::cout << std::endl;
	}
	return 0;
}

void DIV_MOD()
{
	int l, r, a;
	std::cin >> l >> r >> a;
	int x(r % a == a - 1 ? r : r - r % a - 1);
	if (x < l)
		x = r;
	std::cout << x / a + x % a << std::endl;
}