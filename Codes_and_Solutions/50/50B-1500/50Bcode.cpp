#include <iostream>
#include <map>

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
    std::string s;
    std::cin >> s;
    std::map<char, int64_t> symbols;
    for (char c : s)
    {
        ++symbols[c];
    }
    int64_t ans(0);
    for (std::pair<char, int64_t> ci : symbols)
    {
        ans += ci.second * ci.second;
    }
    std::cout << ans << std::endl;
}