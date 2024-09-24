#include <iostream>
#include <iomanip>

#define DEBUG 0

#if !DEBUG

void Traffic_Lights(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Traffic_Lights();
		//std::cout << std::endl;
	}
	return 0;
}

void Traffic_Lights(void)
{
	double l, d, v, g, r;
	std::cin >> l >> d >> v >> g >> r;
	double runtime(l / v);
	double timeAtLight(d / v);
	while (timeAtLight - (g + r) >= 0)
	{
		timeAtLight -= g + r;
	}
	if (timeAtLight < g)
		std::cout << std::fixed << std::setprecision(8) << runtime << std::endl;
	else
		std::cout << std::fixed << std::setprecision(8) << runtime + (g + r - timeAtLight) << std::endl;
}

#else

#endif