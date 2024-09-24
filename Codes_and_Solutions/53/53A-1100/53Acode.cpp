#include <iostream>

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
    int len(s.size());
    int n;
    std::cin >> n;
    std::string ans("-1");
    while (n--)
    {
        std::string page;
        std::cin >> page;
        bool ok(true);
        for (int i(0); i < len; ++i)
        {
            if (s[i] != page[i])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            if (ans == "-1" || page < ans)
                ans = page;
        }
    }
    if (ans == "-1")
        ans = s;
    std::cout << ans << std::endl;
}