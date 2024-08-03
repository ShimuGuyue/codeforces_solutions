#include <iostream>
#include <vector>

void Anti_Sudoku();

int main(void)
{
	int t;
	std::cin >> t;
	while(t--)
	{
		Anti_Sudoku();
		//std::cout << std::endl;
	}
	return 0;
}

void Anti_Sudoku()
{
	const int n(9);
	std::vector<std::string> sudoku(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> sudoku[i];
	}
	for (std::string& s : sudoku)
	{
		for (char& c : s)
		{
			if (c == '1')
				c = '9';
		}
	}
	for (std::string s : sudoku)
	{
		std::cout << s << std::endl;
	}
}