#include <iostream>
#include <vector>

void solve(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		solve();
		//std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
	std::vector<int> counts(5);
	std::vector<std::string> sizes{ "S", "M", "L", "XL", "XXL" }; 
	for (int& i : counts)
	{
		std::cin >> i;
	}
	int k;
	std::cin >> k;
	while (k--)
	{
		std::string size;
		std::cin >> size;
		int index(-1);
		if (size == "S")
			index = 0;
		else if (size == "M")
			index = 1;
		else if (size == "L")
			index = 2;
		else if (size == "XL")
			index = 3;
		else if (size == "XXL")
			index = 4;

		for (int i(0); i < 5; ++i)
		{
			if (index + i < 5 && counts[index + i])
			{
				--counts[index + i];
				std::cout << sizes[index + i] << std::endl;
				break;
			}
			if (index - i >= 0 && counts[index - i])
			{
				--counts[index - i];
				std::cout << sizes[index - i] << std::endl;
				break;
			}
		}
		
	}
}