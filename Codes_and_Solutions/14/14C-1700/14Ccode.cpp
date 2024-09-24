#include <iostream>
#include <map>

void Four_Segments();

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Four_Segments();
		//std::cout << std::endl;
	}
	return 0;
}

void Four_Segments()
{
	using line = std::pair<std::pair<int, int>, std::pair<int, int>>;
	using point = std::pair<int, int>;
#
	std::map<line, int> lines;
	std::map<point, int> points;
	std::map<int, int> xs;
	std::map<int, int> ys;
	int n(4);
	bool oblique(false);
	bool noline(false);
	while(n--)
	{
		int x1, y1, x2, y2;
		std::cin >> x1 >> y1 >> x2 >> y2;
		if (x1 != x2 && y1 != y2)
			oblique = true;
		if (x1 == x2 && y1 == y2)
			noline = true;
		++points[{x1, y1}]; ++points[{x2, y2}];
		++xs[x1]; ++xs[x2];
		++ys[y1]; ++ys[y2];
		if (x1 > x2)
		{
			std::swap(x1, x2); std::swap(y1, y2);
		}
		else if (x1 == x2 && y1 > y2)
		{
			std::swap(x1, x2); std::swap(y1, y2);
		}
		++lines[{{x1, y1}, { x2, y2 }}];
	}
	if (oblique || noline)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (points.size() != 4)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (xs.size() != 2)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (ys.size() != 2)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (lines.size() != 4)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	std::cout << "YES" << std::endl;
}