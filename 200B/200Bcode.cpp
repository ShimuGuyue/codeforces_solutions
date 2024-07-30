#include <iostream>
#include <iomanip>
#include <vector>

double Drinks(std::vector<double> vd);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<double> p;
	while (n--)
	{
		double tempVolumeFraction;
		std::cin >> tempVolumeFraction;
		p.push_back(tempVolumeFraction);
	}
	std::cout << std::fixed << std::setprecision(12) << Drinks(p) << std::endl;
	return 0;
}

double Drinks(std::vector<double> vd)
{
	double sum(0);
	int count(vd.size());
	for (std::vector<double>::iterator it(vd.begin()); it != vd.end(); ++it)
	{
		sum += *it;
	}
	return sum / count;
}