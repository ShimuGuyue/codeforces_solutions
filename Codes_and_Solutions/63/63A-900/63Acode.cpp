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
    using crew = std::pair<std::string, std::string>;
    int n;
    std::cin >> n;
    std::vector<crew> crews(n);
    for (crew& c : crews)
    {
        std::cin >> c.first >> c.second;
        if(c.second == "rat")
            std::cout << c.first << std::endl;
    }
    for (crew c : crews)
    {
        if(c.second == "woman" || c.second == "child")
            std::cout << c.first << std::endl;
    }
    for (crew c : crews)
    {
        if(c.second == "man")
            std::cout << c.first << std::endl;
    }
    for (crew c : crews)
    {
        if(c.second == "captain")
            std::cout << c.first << std::endl;
    }
}