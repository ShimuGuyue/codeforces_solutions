#define DEBUG
#include <iostream>

void solve(void);

int main(void)
{
    int t(1);
    // std::cin >> t;
    while (t--)
    {
        solve();
        // std::cout << std::endl;
    }
    return 0;
}

void solve(void)
{
    int n, m;
    std::cin >> n >> m;
    int l(0), r(n + 1);
    while (m--)
    {
        std::string temp;
        std::string direction;
        int index;
        std::cin >> temp >> temp >> direction >> temp >> index;
        if (direction == "left")
            r = std::min(r, index);
        else // if (direction == "right")
            l = std::max(l, index);
    }

    if (l + 1 < r)
        std::cout << r - l - 1 << std::endl;
    else
        std::cout << -1 << std::endl;
}