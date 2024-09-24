#include <iostream>
#include <map>

void Obsession_with_Robots();

int main(void)
{
	Obsession_with_Robots();
	return 0;
}

void Obsession_with_Robots()
{
	std::string movements;
	std::cin >> movements;

	int x(0), y(0);
	std::map<std::pair<int, int>, int> marks;

	for (int i(0); i < movements.size(); ++i)
	{
		int lastX(x);
		int lastY(y);
		if (movements[i] == 'L')
			--x;
		else if (movements[i] == 'R')
			++x;
		else if (movements[i] == 'U')
			++y;
		else // if (movements[i] == 'D')
			--y;

		if (marks[{ x, y }] == 1)
		{
			std::cout << "BUG" << std::endl;
			return;
		}
		else
		{
			marks[{ lastX, lastY }] = 1;
			marks[{ lastX + 1, lastY }] = 1;
			marks[{ lastX - 1, lastY }] = 1;
			marks[{ lastX, lastY + 1 }] = 1;
			marks[{ lastX, lastY - 1 }] = 1;
		}
	}
	std::cout << "OK" << std::endl;
}