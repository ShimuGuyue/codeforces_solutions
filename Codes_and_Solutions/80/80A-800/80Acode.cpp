#include <iostream>

int prime[16] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53 };

bool Panoramix_s_Prediction(int, int);

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	if (Panoramix_s_Prediction(n, m))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}

bool Panoramix_s_Prediction(int n, int m)
{
	int flagN;
	for (int i = 0; i < 16; ++i)
	{
		if (prime[i] == n)
		{
			flagN = i;
			break;
		}
	}
	if (prime[flagN + 1] == m)
		return true;
	//else
	return false;
}