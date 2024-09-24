#include <iostream>

std::string Die_Roll(int y, int w);

int main(void)
{
	int y, w;
	std::cin >> y >> w;
	std::cout << Die_Roll(y, w) << std::endl;
	return 0;
}

std::string Die_Roll(int y, int w)
{
	int max(std::max(y, w));
	std::string ans;
	switch (max)
	{
	case 1: ans = "1/1"; break;
	case 2: ans = "5/6"; break;
	case 3: ans = "2/3"; break;
	case 4: ans = "1/2"; break;
	case 5: ans = "1/3"; break;
	case 6: ans = "1/6"; break;
	default:
		break;
	}
	return ans;
}