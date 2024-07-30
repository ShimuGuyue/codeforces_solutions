#include <iostream>
#include <vector>

void Dominant_Piranha();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Dominant_Piranha();
		//std::cout << std::endl;
	}
	return 0;
}

void Dominant_Piranha()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> a[i];
	}
	int max(a.front());
	int min(a.front());
	for (int i(0); i < n; ++i)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	if (max == min)
	{
		std::cout << -1 << std::endl;
		return;
	}
	std::vector<int> indexs;
	indexs.push_back(0);
	for (int i(0); i < n; ++i)
	{
		if (a[i] == max)
			indexs.push_back(i + 1);
	}
	indexs.push_back(n + 1);
	int maxDif(0);
	int flag(0);
	for (int i(1); i < indexs.size() - 1; ++i)
	{
		if (indexs[i + 1] - indexs[i - 1] - 2 > maxDif)
		{
			maxDif = indexs[i + 1] - indexs[i - 1] - 2;
			flag = indexs[i];
		}
	}
	std::cout << flag << std::endl;
}