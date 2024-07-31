#include <iostream>
#include <vector>

int Police_Recruits(std::vector<int> vi);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> events;
	while (n--)
	{
		int tempEvent;
		std::cin >> tempEvent;
		events.push_back(tempEvent);
	}
	std::cout << Police_Recruits(events) << std::endl;
	return 0;
}

int Police_Recruits(std::vector<int> vi)
{
	int police(0);
	int untreated(0);
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		if (*it == -1)
		{
			if (police > 0)
				--police;
			else
				++untreated;
		}
		else
			police += *it;
	}
	return untreated;
}