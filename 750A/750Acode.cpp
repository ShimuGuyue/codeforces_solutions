#include <iostream>

int New_Year_and_Hurry(int n, int k);

int main(void)
{
	int n, k;
	std::cin >> n >> k;
	std::cout << New_Year_and_Hurry(n, k) << std::endl;
	return 0;
}

int New_Year_and_Hurry(int n, int k)
{
	int time(240 - k);
	for (int i(1); i <= n; ++i)
	{
		time -= i * 5;
		if (time < 0)
			return i - 1;
	}
	return n;
}