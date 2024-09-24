#include <iostream>
#include <vector>
#include <algorithm>

void solve(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		solve();
		//std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> positive;
	std::vector<int> negative;
	bool zero(false);
	while (n--)
	{
		int c;
		std::cin >> c;
		if (c > 0)
			positive.push_back(c);
		else if (c < 0)
			negative.push_back(c);
		else
			zero = true;
	}
	sort(negative.begin(), negative.end());
	if (positive.size() == 0 && negative.size() == 0)
	{
		std::cout << 0 << std::endl;
		return;
	}
	if (positive.size() == 0 && negative.size() == 1)
	{
		if(zero)
			std::cout << 0 << std::endl;
		else
			std::cout << negative.front() << std::endl;
		return;
	}
	for (int i(0); i < positive.size(); ++i)
	{
		std::cout << positive[i] << " ";
	}
	for (int i(1); i < negative.size(); i += 2)
	{
		std::cout << negative[i - 1] << " ";
		std::cout << negative[i] << " ";
	}
	std::cout << std::endl;
}