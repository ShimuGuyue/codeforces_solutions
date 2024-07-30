#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Gravity_Flip(std::vector<int> vi);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a;
	while (n--)
	{
		int tempNumber;
		std::cin >> tempNumber;
		a.push_back(tempNumber);
	}
	std::vector<int> ans(Gravity_Flip(a));
	for (std::vector<int>::iterator it(ans.begin()); it != ans.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return 0;
}

std::vector<int> Gravity_Flip(std::vector<int> vi)
{
	sort(vi.begin(), vi.end());
	return vi;
}