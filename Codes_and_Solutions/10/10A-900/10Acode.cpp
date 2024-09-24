#include <iostream>

void Power_Consumption_Calculation();

int main(void)
{
	Power_Consumption_Calculation();
	return 0;
}

void Power_Consumption_Calculation()
{
	int n, p1, p2, p3, t1, t2;
	std::cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	int last(-1);
	int sum(0);
	while (n--)
	{
		int l, r;
		std::cin >> l >> r;
		sum += (r - l) * p1;
		if(last != -1)
		{
			int time(l - last);
			if (time <= t1)
				sum += time * p1;
			else if (time <= t1 + t2)
				sum += p1 * t1 + p2 * (time - t1);
			else
				sum += p1 * t1 + p2 * t2 + p3 * (time - t1 - t2);
		}
		last = r;
	}
	std::cout << sum << std::endl;
}