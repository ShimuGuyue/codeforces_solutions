#include <iostream>
#include <vector>

int Kefa_and_First_Steps(std::vector<int> vi);

int main(void)
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
	std::cout << Kefa_and_First_Steps(a) << std::endl;
	return 0;
}

int Kefa_and_First_Steps(std::vector<int> vi)
{
	int len = 1;
	int tempLen = 1;
	for (std::vector<int>::iterator it(vi.begin() + 1); it != vi.end(); ++it)
	{
		if (*it >= *(it - 1))
			++tempLen;
		else
		{
			len = std::max(len, tempLen);
			tempLen = 1;
		}
	}
	len = std::max(len, tempLen);
	return len;
}