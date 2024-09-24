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
    int a(0), b(0), c(0);
    std::vector<std::string> compares(3);
    for (std::string& s : compares)
    {
        std::cin >> s;
        if (s[1] == '<')
            std::swap(s.front(), s.back());
        if (s.front() == 'A')
            ++a;
        if (s.front() == 'B')
            ++b;
        if (s.front() == 'C')
            ++c;
    }
#
    if (a == 1 && b == 1 && c == 1)
    {
        std::cout << "Impossible" << std::endl;
        return;
    }
#
    if (a == 0)
        std::cout << "A";
    else if (b == 0)
        std::cout << "B";
    else if (c == 0)
        std::cout << "C";
#
    if (a == 1)
        std::cout << "A";
    else if (b == 1)
        std::cout << "B";
    else if (c == 1)
        std::cout << "C";
#
    if (a == 2)
        std::cout << "A";
    else if (b == 2)
        std::cout << "B";
    else if (c == 2)
        std::cout << "C";
#
    std::cout << std::endl;
}