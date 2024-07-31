#include <iostream>
#include <vector>
#include <algorithm>

int Puzzles(std::vector<int> vi, int n);

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> puzzles;
	while (m--)
	{
		int tempPuzzle;
		std::cin >> tempPuzzle;
		puzzles.push_back(tempPuzzle);
	}
	std::cout << Puzzles(puzzles, n) << std::endl;
	return 0;
}

int Puzzles(std::vector<int> vi, int n)
{
	sort(vi.begin(), vi.end());
	int minDif(1000);
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end() - n + 1; ++it)
	{
		minDif = std::min(*(it + n - 1) - *it, minDif);
	}
	return minDif;
}