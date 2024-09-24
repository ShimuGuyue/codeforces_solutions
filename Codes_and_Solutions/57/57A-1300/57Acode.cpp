#include <iostream>

int find_loc(int n, int x, int y);
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
    int n, x1, y1, x2, y2;
    std::cin >> n >> x1 >> y1 >> x2 >> y2;
    int loc1(find_loc(n, x1, y1));
	int loc2(find_loc(n, x2, y2));
	if (loc2 < loc1)
		std::swap(loc1, loc2); 
	int ans(std::min(loc2 - loc1, loc1 + 4 * n - loc2));
	std::cout << ans << std::endl;
}

int find_loc(int n, int x, int y)
{
	if (y == 0)
		return x;
	if (x == n)
		return n + y;
	if (y == n)
		return n + n + n - x;
	// if (x == 0)
		return n + n + n + n - y; 
}