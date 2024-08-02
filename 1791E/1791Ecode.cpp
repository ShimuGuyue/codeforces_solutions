#include <iostream>
#include <vector>

void Negatives_and_Positives();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Negatives_and_Positives();
		//std::cout << std::endl;
	}
	return 0;
}

void Negatives_and_Positives()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	int countNegative(0);
	bool have0(false);
	long long sum(0);
	int min(INT_MAX);
	for (int i(0); i < n; ++i)
	{
		std::cin >> a[i];
		if (a[i] < 0)
		{
			++countNegative;
			a[i] = -a[i];
		}
		else if (a[i] == 0)
			have0 = true;
		sum += a[i];
		min = std::min(min, a[i]);
	}
	if (!have0 && countNegative % 2)
		sum -= 2 * min;
	std::cout << sum << std::endl;
}