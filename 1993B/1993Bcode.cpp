#include <iostream>
#include <vector>
#include <algorithm>

void Parity_and_Sum();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Parity_and_Sum();
		//std::cout << std::endl;
	}
	return 0;
}

void Parity_and_Sum()
{
	int n;
	std::cin >> n;
	int countOdd(0);
	int countEven(0);
	long long maxOdd(0);
	std::vector<long long> evens;
	while (n--)
	{
		long long a;
		std::cin >> a;
		if (a % 2)
		{
			++countOdd;
			maxOdd = std::max(maxOdd, a);
		}
		else
		{
			++countEven;
			evens.push_back(a);
		}
	}
	if (!countOdd || !countEven)
	{
		std::cout << 0 << std::endl;
		return;
	}
	sort(evens.begin(), evens.end());
	int count(0);
	for (int i(0); i < evens.size(); ++i)
	{
		if (maxOdd > evens[i])
		{
			++count;
			maxOdd += evens[i];
		}
		else
		{
			count += 2;
			maxOdd += evens.back();
		}
	}
	std::cout << count << std::endl;
}