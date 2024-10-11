#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int& i : a)
    {
        std::cin >> i;
    }
    std::sort(a.begin(), a.end());
    std::vector<int> flags;
    flags.push_back(a.front());
    for (int i : a)
    {
        if (i != flags.back())
            flags.push_back(i);
    }
    for (int i(1); i < flags.size(); ++i)
    {
        if (flags[i - 1] == 1)
            continue;
        if (flags[i] < flags[i - 1] * 2)
        {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}