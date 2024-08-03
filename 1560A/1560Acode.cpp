#include <iostream>
#include <vector>

std::vector<int> numbers;

int Dislike_of_Threes(int n);

int main(void)
{
	for (int i(1), count(0); count < 1000; ++i)
	{
		if (i % 3 == 0 || i % 10 == 3)
			continue;
		else
		{
			numbers.push_back(i);
			++count;
		}
	}
	int t;
	std::cin >> t;
	while (t--)
	{
		int k;
		std::cin >> k;
		std::cout << Dislike_of_Threes(k) << std::endl;
	}
	return 0;
}

int Dislike_of_Threes(int n)
{
	return numbers[n - 1];
}