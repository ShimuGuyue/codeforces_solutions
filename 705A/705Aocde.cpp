#include <iostream>

std::string Hulk(int n);

int main(void)
{
	int n;
	std::cin >> n;
	std::cout << Hulk(n) << std::endl;
	return 0;
}

std::string Hulk(int n)
{
	std::string ans;
	for (int i = 1; i < n; ++i)
	{
		if (i % 2 == 1)
			ans += "I hate that ";
		else
			ans += "I love that ";
	}
	if (n % 2 == 1)
		ans += "I hate it";
	else
		ans += "I love it";
	return ans;
}