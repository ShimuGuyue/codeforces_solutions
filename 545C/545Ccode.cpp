#include <iostream>
#include <vector>

void Woodcutters();

int main(void)
{
	Woodcutters();
	return 0;
}

void Woodcutters()
{
	int n; std::cin >> n;
	std::vector<int> x(n);
	std::vector<int> h(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> x[i] >> h[i];
	}
	if (n <= 2)
	{
		std::cout << n << std::endl;
		return;
	}
	int sum(2);
	int left(x[0]);
	int right(INT_MIN);
	for (int i(1); i < n - 1; ++i)
	{
		right = x[i + 1];
		if (x[i] - left - 1 >= h[i])
		{
			++sum;
			left = x[i];
		}
		else if (right - x[i] - 1 >= h[i])
		{
			++sum;
			left = x[i] + h[i];
		}
		else
			left = x[i];
	}
	std::cout << sum << std::endl;
}