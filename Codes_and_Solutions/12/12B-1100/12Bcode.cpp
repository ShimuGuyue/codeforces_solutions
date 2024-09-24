#include <iostream>
#include <algorithm>

void Correct_Solution_(void);

int main(void)
{
	Correct_Solution_();
	return 0;
}

void Correct_Solution_(void)
{
	std::string n;
	std::cin >> n;
	std::string m;
	std::cin >> m;
	sort(n.begin(), n.end());
	if (n.front() == '0')
		for (char& c : n)
		{
			if (c != '0')
			{
				std::swap(n.front(), c);
				break;
			}
		}
	if (n == m)
		std::cout << "OK" << std::endl;
	else
		std::cout << "WRONG_ANSWER" << std::endl;
}