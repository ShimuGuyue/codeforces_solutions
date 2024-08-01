#include <iostream>
#include <vector>

void Choose_the_Different_Ones_();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Choose_the_Different_Ones_();
		//std::cout << std::endl;
	}
	return 0;
}

void Choose_the_Different_Ones_()
{
	int n, m, k;
	std::cin >> n >> m >> k;
	std::vector<int> a(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> a[i];
	}
	std::vector<int> b(m);
	for (int i(0); i < m; ++i)
	{
		std::cin >> b[i];
	}
	std::vector<int> counts(k);
	for (int i : a)
	{
		if (i <= k)
			counts[i - 1] = 1;
	}
	for (int i : b)
	{
		if (i <= k)
			if (counts[i - 1] == 1 || counts[i - 1] == 3)
				counts[i - 1] = 3;
			else
				counts[i - 1] = 2;
	}
	int count1(0);
	int count2(0);
	for (int i : counts)
	{
		if (i == 1)
			++count1;
		else if (i == 2)
			++count2;
		else if (i == 0)
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	if (count1 > k / 2 || count2 > k / 2)
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
}