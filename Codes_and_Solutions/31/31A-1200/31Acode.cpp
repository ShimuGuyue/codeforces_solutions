#include <iostream>
#include <vector>
#include <algorithm>

#define DEBUG 0

#if !DEBUG

void Worms_Evolution(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Worms_Evolution();
		//std::cout << std::endl;
	}
	return 0;
}

void Worms_Evolution(void)
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> a(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> a[i].first;
		a[i].second = i + 1;

	}
	std::sort(a.begin(), a.end(),
		[](std::pair<int, int> a, std::pair<int, int> b){
			return a.first < b.first;
		});
	for (int i(0); i < n - 2; ++i)
	{
		for (int j(i + 1); j < n - 1; ++j)
		{
			for (int k(j + 1); k < n; ++k)
			{
				if (a[i].first + a[j].first == a[k].first)
				{
					std::cout << a[k].second << " " << a[j].second << " " << a[i].second << std::endl;
					return;
				}
				if (a[i].first + a[j].first < a[k].first)
					break;
			}
		}
	}
	std::cout << -1 << std::endl;
}

#else

#endif