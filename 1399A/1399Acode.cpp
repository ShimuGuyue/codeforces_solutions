#include <iostream>
#include <vector>
#include <algorithm>

bool Remove_Smallest(std::vector<int> vi);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		std::vector<int> a;
		while (n--)
		{
			int tempA;
			std::cin >> tempA;
			a.push_back(tempA);
		}
		if (Remove_Smallest(a))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}

bool Remove_Smallest(std::vector<int> vi)
{
	sort(vi.begin(), vi.end());
	int lower(vi.front());
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		if (*it - lower > 1)
			return false;
		lower = *it;
	}
	return true;
}