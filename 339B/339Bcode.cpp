#include <iostream>
#include <vector>

long long Xenia_and_Ringroad(int n, std::vector<int> vi);

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> tasks;
	while (m--)
	{
		int tempTask;
		std::cin >> tempTask;
		tasks.push_back(tempTask);
	}
	std::cout << Xenia_and_Ringroad(n, tasks) << std::endl;
	return 0;
}

long long Xenia_and_Ringroad(int n, std::vector<int> vi)
{
	long long count(0);
	int lastLoc(1);
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		if (*it >= lastLoc)
			count += *it - lastLoc;
		else
			count += n - lastLoc + *it;
		lastLoc = *it;
	}
	return count;
}