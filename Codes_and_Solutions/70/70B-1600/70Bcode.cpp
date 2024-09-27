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
    int n;
    std::cin >> n;
    std::cin.get();
    std::string s;
    getline(std::cin, s);
    int ans(0);
    int length(0);
    int lastIndex(0);
    for (int i(0); i < s.size(); ++i)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            int len(i - lastIndex + 1);
            if (len > n)
            {
                std::cout << "Impossible" << std::endl;
                return;
            }
            if (length)
                length += len + 1;
            else
                length += len;
            if (length > n)
            {
                ++ans;
                length = len;
            }
            lastIndex = i + 2;
        }
    }
    ++ans;
    std::cout << ans << std::endl;
}