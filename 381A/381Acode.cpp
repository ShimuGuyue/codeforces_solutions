#include <iostream>
#include <deque>

std::pair<int, int> Sereja_and_Dima(std::deque<int> vi);

int main(void)
{
	int n;
	std::cin >> n;
	std::deque<int> cards;
	while (n--)
	{
		int tempCard;
		std::cin >> tempCard;
		cards.push_back(tempCard);
	}
	std::cout << Sereja_and_Dima(cards).first << ' ' << Sereja_and_Dima(cards).second << std::endl;
	return 0;
}

std::pair<int, int> Sereja_and_Dima(std::deque<int> vi)
{
	int sumS(0);
	int sumD(0);
	int turn = 1;
	while (vi.size())
	{
		if (turn % 2 == 1)
			if (vi.front() >= vi.back())
			{
				sumS += vi.front();
				vi.pop_front();
			}
			else
			{
				sumS += vi.back();
				vi.pop_back();
			}
		else
			if (vi.front() >= vi.back())
			{
				sumD += vi.front();
				vi.pop_front();
			}
			else
			{
				sumD += vi.back();
				vi.pop_back();
			}
		++turn;
	}
	return std::pair<int, int>(sumS, sumD);
}