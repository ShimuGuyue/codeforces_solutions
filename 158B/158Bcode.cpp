#include <iostream>
#include <vector>

int Taxi(std::vector<int> vi);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> children;
	while (n--)
	{
		int tempChildren;
		std::cin >> tempChildren;
		children.push_back(tempChildren);
	}
	std::cout << Taxi(children) << std::endl;
	return 0;
}

int Taxi(std::vector<int> vi)
{
	int countTaxi(0);
	int count1(0);
	int count2(0);
	int count3(0);
	int count4(0);
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		if (*it == 1)
			++count1;
		else if (*it == 2)
			++count2;
		else if (*it == 3)
			++count3;
		else if (*it == 4)
			++count4;
	}
	countTaxi += count4;
	countTaxi += count2 * 2 / 4;
	int mod2 = count2 % 2;
	if (count1 <= count3)
		countTaxi += count3 + mod2;
	else
	{
		countTaxi += count3;
		int mod1(count1 - count3);
		int sumMod(mod2 * 2 + mod1);
		countTaxi += sumMod % 4 == 0 ? sumMod / 4 : sumMod / 4 + 1;
	}
	return countTaxi;
}