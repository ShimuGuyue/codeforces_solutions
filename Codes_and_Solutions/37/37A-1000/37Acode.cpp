#include <iostream>
#include <map>

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
	std::map<int, int> bars;
	int max(0);
	while (n--)
	{
		int l;
		std::cin >> l;
		++bars[l];
		max = std::max(max, bars[l]);
	}
	std::cout << max << " " << bars.size() << std::endl;
}