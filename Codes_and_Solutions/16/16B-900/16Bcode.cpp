#include <iostream>
#include <vector>
#include <algorithm>

using matche = std::pair<int, int>;

void Burglar_and_Matches();

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Burglar_and_Matches();
		//std::cout << std::endl;
	}
	return 0;
}

void Burglar_and_Matches()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<matche> matches(m);
	for (matche& mt : matches)
	{
		std::cin >> mt.first >> mt.second;
	}
	std::sort(matches.begin(), matches.end(),
		[](matche a, matche b) { return a.second > b.second; });
	int sum(0);
	for (matche mt : matches)
	{
		if (mt.first < n)
		{
			sum += mt.first * mt.second;
			n -= mt.first;
		}
		else
		{
			sum += n * mt.second;
			n = 0;
			break;
		}
	}
	std::cout << sum << std::endl;
}