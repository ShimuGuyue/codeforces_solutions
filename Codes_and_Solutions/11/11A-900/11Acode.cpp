#include <iostream>
#include <vector>

void Increasing_Sequence();

int main(void)
{
	Increasing_Sequence();
	return 0;
}

void Increasing_Sequence()
{
	int n, d;
	std::cin >> n >> d;
	std::vector<int> b(n);
	for (int& i : b)
	{
		std::cin >> i;
	}
	int ans(0);
	for (int i(1); i < n; ++i)
	{
		if (b[i] > b[i - 1])
			continue;
		int dif(b[i - 1] - b[i]);
		int count(dif / d + 1);
		b[i] += d * count;
		ans += count;
	}
	std::cout << ans << std::endl;
}