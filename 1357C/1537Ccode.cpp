#include <iostream>
#include <vector>
#include <algorithm>

void Challenging_Cliffs();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Challenging_Cliffs();
		//std::cout << std::endl;
	}
	return 0;
}

void Challenging_Cliffs()
{
	int n;
	std::cin >> n;
	std::vector<int> h(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> h[i];
		
	}
	sort(h.begin(), h.end());
	int minDif(INT_MAX);
	int flag1;
	int flag2;
	for (int i(1); i < n; ++i)
	{
		if (h[i] - h[i - 1] < minDif)
		{
			minDif = h[i] - h[i - 1];
			flag1 = i - 1;
			flag2 = i;
		}
	}
	std::cout << h[flag1] << " ";
	for (int i(flag2 + 1); i < n; ++i)
	{
		std::cout << h[i] << " ";
	}
	for (int i(0); i < flag1; ++i)
	{
		std::cout << h[i] << " ";
	}
	std::cout << h[flag2] << std::endl;
}