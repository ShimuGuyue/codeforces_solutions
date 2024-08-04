#include <iostream>

void Lunch_Rush();

int main(void)
{
	Lunch_Rush();
	return 0;
}

void Lunch_Rush()
{
	int n, k;
	std::cin >> n >> k;
	int maxJoyValue(INT_MIN);
	while (n--)
	{
		int f, t;
		std::cin >> f >> t;
		int joyValue(t <= k ? f : f - (t - k));
		maxJoyValue = std::max(maxJoyValue, joyValue);
	}
	std::cout << maxJoyValue << std::endl;
}