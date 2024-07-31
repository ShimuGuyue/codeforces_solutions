#include <iostream>
#include <string>

int Buy_a_Shovel(int k, int r);

int main(void)
{
	int k, r;
	std::cin >> k >> r;
	std::cout << Buy_a_Shovel(k, r) << std::endl;
	return 0;
}

int Buy_a_Shovel(int k, int r)
{
	int mod(k % 10);
	int res(0);
	for (int i(1); i <= 10; ++i)
	{
		res += mod;
		std::string tostrRes = std::to_string(res);
		if (tostrRes.back() == '0' || tostrRes.back() == r + '0')
			return i;
	}
	return -1;
}