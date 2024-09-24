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
    std::vector<std::string> parts(3);
    for (int i(0); i < 3; ++i)
    {
        std::string s;
        std::cin >> s;
        for (char c : s)
        {
            if (isalpha(c))
                parts[i].push_back(tolower(c));
        }
    }
    std::vector<std::string> anss;
    for (int i(0); i < 3; ++i)
    {
        for (int j(0); j < 3; ++j)
        {
            if (j == i)
                continue;
            for (int k(0); k < 3; ++k)
            {
                if (k == i || k == j)
                    continue;
                anss.push_back(parts[i] + parts[j] + parts[k]);
            }
        }
    }
    int n;
    std::cin >> n;
    while (n--)
    {
        std::string s;
        std::cin >> s;
        std::string flag;
        for (char c : s)
        {
            if (isalpha(c))
                flag += tolower(c);
        }
        bool ac(false);
        for (std::string ans : anss)
        {
            if (ans == flag)
            {
                ac = true;
                break;
            }
        }
        if (ac)
            std::cout << "ACC" << std::endl;
        else
            std::cout << "WA" << std::endl;
    }
}