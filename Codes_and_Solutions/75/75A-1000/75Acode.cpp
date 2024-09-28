#include <iostream>
#include <string>

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
    std::string a, b;
    std::cin >> a;
    std::cin >> b;
    std::string aa, bb;
    for (char c : a)
    {
        if (c != '0')
            aa += c;
    }
    for (char c : b)
    {
        if (c != '0')
            bb += c;
    }
    std::string flag(std::to_string(stoi(a) + stoi(b)));
    std::string fflag;
    for (char c : flag)
    {
        if (c != '0')
            fflag += c;
    }
    if (stoi(aa) + stoi(bb) == stoi(fflag))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}