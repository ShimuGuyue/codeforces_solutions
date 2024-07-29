#include <iostream>
#include <vector>
int main(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> a;
	for (int i(1); i <= n; ++i)
	{
		int tempScore;
		std::cin >> tempScore;
		a.push_back(tempScore);
	}
	int ans(0);
	int flag(a[k - 1]);
	for (std::vector<int>::iterator it(a.begin()); it != a.end(); ++it)
	{
		if (*it >= flag && *it > 0)
			++ans;
		else
			break;
	}
	std::cout << ans;
	return 0;
}