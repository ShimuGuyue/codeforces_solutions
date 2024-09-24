#include <iostream>
#include <vector>

int IQ_test(std::vector<int> vi);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> numbers;
	while (n--)
	{
		int tempNumber;
		std::cin >> tempNumber;
		numbers.push_back(tempNumber);
	}
	std::cout << IQ_test(numbers) << std::endl;
	return 0;
}

int IQ_test(std::vector<int> vi)
{
	if (vi[0] % 2 == 0 && vi[1] % 2 == 0)
		for (int i = 2; i < vi.size(); ++i)
		{
			if (vi[i] % 2 == 1)
				return i + 1;
		}
	if (vi[0] % 2 == 1 && vi[1] % 2 == 1)
		for (int i = 2; i < vi.size(); ++i)
		{
			if (vi[i] % 2 == 0)
				return i + 1;
		}
	if (vi[2] % 2 == 0)
		return vi[0] % 2 == 0 ? 2 : 1;
	if (vi[2] % 2 == 1)
		return vi[0] % 2 == 1 ? 2 : 1;
}