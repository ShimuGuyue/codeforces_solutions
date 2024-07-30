#include <iostream>
//#include <string>
#include <vector>

std::vector<int> luckyNumber{ 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };

bool Lucky_Division(int n);

int main(void)
{
	//for (int i(1); i <= 1000; ++i)
	//{
	//	std::string tostrI(std::to_string(i));
	//	bool judgeLuckyNumber(true);
	//	for (std::string::iterator it(tostrI.begin()); it != tostrI.end(); ++it)
	//	{
	//		if (*it != '4' && *it != '7')
	//		{
	//			judgeLuckyNumber = false;
	//			break;
	//		}
	//	}
	//	if (judgeLuckyNumber)
	//		std::cout << i << ", ";
	//}
	int n;
	std::cin >> n;
	if (Lucky_Division(n))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}

bool Lucky_Division(int n)
{
	for (std::vector<int>::iterator it(luckyNumber.begin()); it != luckyNumber.end(); ++it)
	{
		if (n % *it == 0)
			return true;
	}
	return false;
}