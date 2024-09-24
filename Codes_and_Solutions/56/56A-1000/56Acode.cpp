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
    int ans(0);
    int n;
    std::cin >> n;
    while (n--)
    {
        std::string s;
        std::cin >> s;
        bool isAge(true);
        for (char c : s)
        {
            if (!isdigit(c))
            {
                isAge = false;
                break;
            }
        }
        if (isAge)
        {
            int age(std::stoi(s));
            if (age < 18)
                ++ans;
        }
        else
        {
            if (s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM" 
                || s == "SAKE" || s == "TEQUILA" || s == "VODKA" || s == "WHISKEY" || s == "WINE")
                ++ans;
        }
    }
    std::cout << ans << std::endl;
}