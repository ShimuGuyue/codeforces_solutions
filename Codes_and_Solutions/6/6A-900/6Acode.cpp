#include <iostream>
#include <algorithm>

void Triangle();

int main(void)
{
	Triangle();
	return 0;
}

void Triangle()
{
	const int n(4);
	int a[n];
	for (int i(0); i < n; ++i)
	{
		std::cin >> a[i];
	}
	std::sort(a, a + n);
	bool tri(false);
	bool seg(false);
	for (int i(0); i < n - 2; ++i)
	{
		for (int j(i + 1); j < n - 1; ++j)
		{
			for (int k(j + 1); k < n; ++k)
			{
				if (a[i] + a[j] > a[k])
					tri = true;
				else if (a[i] + a[j] == a[k])
					seg = true;
			}
		}
	}
	if (tri)
		std::cout << "TRIANGLE" << std::endl;
	else if (seg)
		std::cout << "SEGMENT" << std::endl;
	else
		std::cout << "IMPOSSIBLE" << std::endl;
}