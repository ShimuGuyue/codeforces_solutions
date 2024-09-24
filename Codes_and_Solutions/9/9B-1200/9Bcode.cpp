#include <iostream>
#include <cmath>
#include <vector>

void Running_Student();

int main(void)
{
	Running_Student();
	return 0;
}

void Running_Student()
{
	int n, vb, vs;
	std::cin >> n >> vb >> vs;
	std::vector<double> x(n);
	for (int i(0); i < n; ++i)
	{
		std::cin >> x[i];
	}
	double xu, yu;
	std::cin >> xu >> yu;
#
	double minTime(INT_MAX);
	double minLen(INT_MAX);
	int ans(0);
	for (int i(1); i < n; ++i)
	{
		double timeB(x[i] / vb);
		double lenS(pow((pow(x[i] - xu, 2) + pow(yu, 2)), 0.5));
		double timeS(lenS / vs);
		if (timeB + timeS < minTime)
		{
			minTime = timeB + timeS;
			minLen = lenS;
			ans = i + 1;
		}
		else if (timeB + timeS == minTime)
		{
			if (lenS < minLen)
			{
				minLen = lenS;
				ans = i + 1;
			}
		}
	}
#
	std::cout << ans << std::endl;
}