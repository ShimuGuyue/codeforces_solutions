#include <iostream>
#include <deque>

void Alice_Bob_and_Chocolate();

int main(void)
{
	Alice_Bob_and_Chocolate();
	return 0;
}

void Alice_Bob_and_Chocolate()
{
	int n;
	std::cin >> n;
	std::deque<int> t(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> t[i];
	}
#
	int countAlice(0);
	int countBob(0);
	int lenAlice(0);
	int lenBob(0);
	while (!t.empty())
	{
		if (lenAlice == 0)
		{
			lenAlice = t.front();
			t.pop_front();
			++countAlice;
		}
		if (lenBob == 0 && !t.empty())
		{
			lenBob = t.back();
			t.pop_back();
			++countBob;
		}
		--lenAlice;
		--lenBob;
	}
#
	std::cout << countAlice << " " << countBob << std::endl;
}