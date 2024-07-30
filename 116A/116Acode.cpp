#include <iostream>
#include <vector>

int tram(std::vector<std::pair<int, int>> a);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> stops;
	for (int i(1); i <= n; ++i)
	{
		std::pair<int, int> passengers;
		std::cin >> passengers.first >> passengers.second;
		stops.push_back(passengers);
	}
	std::cout << tram(stops) << std::endl;
	return 0;
}

int tram(std::vector<std::pair<int, int>> a)
{
	int max = 0;
	int count = 0;
	for (std::vector<std::pair<int, int>>::iterator it(a.begin()); it != a.end(); ++it)
	{
		count -= it->first;
		count += it->second;
		max = std::max(max, count);
	}
	return max;
}