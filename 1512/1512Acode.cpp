#include <iostream>
#include <vector>

int Spy_Detected_(std::vector<int> vi);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		std::vector<int> integers;
		while (n--)
		{
			int tempIntegeres;
			std::cin >> tempIntegeres;
			integers.push_back(tempIntegeres);
		}
		std::cout << Spy_Detected_(integers) << std::endl;
	}
	return 0;
}

int Spy_Detected_(std::vector<int> vi)
{
	int a1(*vi.begin());
	int a2(*(vi.begin() + 1));
	if (a1 != a2)
	{
		int a3(*(vi.begin() + 2));
		return a3 == a1 ? 2 : 1;
	}
	else
		for (int i(0); i < vi.size(); ++i)
		{
			if (vi[i] != a1)
				return i + 1;
		}
	return -1;
}