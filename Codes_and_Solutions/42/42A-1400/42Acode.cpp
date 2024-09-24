#include <iostream>
#include <vector>

void solve(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		solve();
		//std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
	int n;
	double v;
	std::cin >> n >> v;
	std::vector<double> a(n);
	for (double& i : a)
	{
		std::cin >> i;
	}
	std::vector<double> b(n);
	for (double& i : b)
	{
		std::cin >> i;
	}
	double maxCopies(INT_MAX);
	for (int i(0); i < n; ++i)
	{
		maxCopies = std::min(maxCopies, b[i] / a[i]);
	}
	double theoryV(0);
	for (double i : a)
	{
		theoryV += i * maxCopies;
	}
	double ans(std::min(v, theoryV));
	std::cout << ans << std::endl;
}