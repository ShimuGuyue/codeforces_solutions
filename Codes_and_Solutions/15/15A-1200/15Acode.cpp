#include <iostream>
#include <vector>
#include <algorithm>

using house = std::pair<double, double>;

void Cottage_Village();

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Cottage_Village();
		//std::cout << std::endl;
	}
	return 0;
}

void Cottage_Village()
{
	int n, t;
	std::cin >> n >> t;
	std::vector<house> houses(n);
	for (house& h : houses)
	{
		std::cin >> h.first >> h.second;
	}
	std::sort(houses.begin(), houses.end(),
		[](house a, house b) { return a.first < b.first; });
	int ans(2);
	for (auto h(houses.begin() + 1); h != houses.end(); ++h)
	{
		double dif((h->first - h->second / 2) - ((h - 1)->first + (h - 1)->second / 2));
		if (dif == t)
			ans += 1;
		else if (dif > t)
			ans += 2;
	}
	std::cout << ans << std::endl;
}