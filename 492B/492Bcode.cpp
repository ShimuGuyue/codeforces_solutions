#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

double Vanya_and_Lanterns(std::vector<double> vd, int l);

int main(void)
{
	int n, l;
	std::cin >> n >> l;
	std::vector<double> lanterns;
	while (n--)
	{
		int tempLanterns;
		std::cin >> tempLanterns;
		lanterns.push_back(tempLanterns);
	}
	std::cout << std::fixed << std::setprecision(10) << Vanya_and_Lanterns(lanterns, l) << std::endl;
	return 0;
}

double Vanya_and_Lanterns(std::vector<double> vd, int l)
{
	sort(vd.begin(), vd.end());
	double maxDif(2 * std::max(vd.front() - 0, l - vd.back()));
	for (std::vector<double>::iterator it(vd.begin() + 1); it != vd.end(); ++it)
	{
		maxDif = std::max(*it - *(it - 1), maxDif);
	}
	return maxDif / 2;
}