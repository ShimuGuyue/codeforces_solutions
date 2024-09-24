#include <iostream>

void Kalevitch_and_Chess();

int main(void)
{
	Kalevitch_and_Chess();
	return 0;
}

void Kalevitch_and_Chess()
{
	const int n(8);
	std::string chessboard[n];
	for (int i(0); i < n; ++i)
	{
		std::cin >> chessboard[i];
	}
#
	int rows(0);
	int cols(0);
	for (int i(0); i < n; ++i)
	{
		bool add(true);
		for (int j(0); j < n; ++j)
		{
			if (chessboard[i][j] == 'W')
			{
				add = false;
				break;
			}
		}
		if (add)
			++rows;
	}
	for (int j(0); j < n; ++j)
	{
		bool add(true);
		for (int i(0); i < n; ++i)
		{
			if (chessboard[i][j] == 'W')
			{
				add = false;
				break;
			}
		}
		if (add)
			++cols;
	}
#
	if (rows == 8 || cols == 8)
		std::cout << 8 << std::endl;
	else
		std::cout << rows + cols << std::endl;
}