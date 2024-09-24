#include <iostream>
#include <vector>
#include <algorithm>

#define DEBUG 0

#if !DEBUG

void Second_Order_Statistics(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Second_Order_Statistics();
		//std::cout << std::endl;
	}
	return 0;
}

void Second_Order_Statistics(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int& i : a)
	{
		std::cin >> i;
	}
	sort(a.begin(), a.end());
	for (int i(1); i < n; ++i)
	{
		if (a[i] != a[i - 1])
		{
			std::cout << a[i] << std::endl;
			return;
		}
	}
	std::cout << "NO" << std::endl;
}

#else

#endif