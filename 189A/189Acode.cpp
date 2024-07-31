#include <iostream>
#include <vector>
#include <algorithm>

int Cut_Ribbon(std::vector<int> vi, int n);

int main(void)
{
	int n;
	std::cin >> n;
	int t(3);
	std::vector<int> a;
	while (t--)
	{
		int temp;
		std::cin >> temp;
		a.push_back(temp);
	}
	std::cout << Cut_Ribbon(a, n) << std::endl;
	return 0;
}

int Cut_Ribbon(std::vector<int> vi, int n)
{
	sort(vi.begin(), vi.end());
	int a(vi[0]);
	int b(vi[1]);
	int c(vi[2]);
	int max(0);
	if (a == 1)
		return n;
	for (int i = 0; c * i <= n; ++i){
		for (int j = 0; c * i + b * j <= n; ++j){
			for (int k = 0; c * i + b * j + a * k <= n; ++k){
				if (c * i + b * j + a * k == n)
					max = std::max(max, i + j + k);}}}
	return max;
}