#include <iostream>
#include <vector>

std::pair<int, int> Reconnaissance_2(std::vector<int> a);
//
int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> a[i];
	}
	std::pair<int, int> flag(Reconnaissance_2(a));
	std::cout << flag.first << " " << flag.second << std::endl;
	return 0;
}

std::pair<int, int> Reconnaissance_2(std::vector<int> a)
{
	int dif(abs(a.back() - a.front()));
	std::pair<int, int> flag({ 1, a.size() });
	for (int i(1); i < a.size(); ++i)
	{
		if (abs(a[i] - a[i - 1]) < dif)
		{
			dif = abs(a[i] - a[i - 1]);
			flag = { i, i + 1 };
		}
	}
	return flag;
}