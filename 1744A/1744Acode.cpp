#include <iostream>
#include <vector>

void Number_Replacement();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Number_Replacement();
		std::cout << std::endl;
	}
	return 0;
}

void Number_Replacement()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> a[i];
	}
	std::string s;
	std::cin >> s;
	for (int i(0); i < n; ++i)
	{
		for (int j(i + 1); j < n; ++j)
		{
			if (a[i] == a[j] && s[i] != s[j])
			{
				std::cout << "NO" << std::endl;
				return;
			}
		}
	}
	std::cout << "YES" << std::endl;
}