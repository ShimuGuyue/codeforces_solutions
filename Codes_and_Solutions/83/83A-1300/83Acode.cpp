#include <iostream>
#include <vector>

int main(void)
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int& i : a)
    {
        std::cin >> i;
    }
    std::vector<int64_t> flags;
    int64_t flag(1);
    for (int i(1); i < n; ++i)
    {
        if (a[i - 1] == a[i])
        {
            ++flag;
        }
        else
        {
            flags.push_back(flag);
            flag = 1;
        }
    }
    flags.push_back(flag);
    int64_t ans(0);
    for (int64_t i : flags)
    {
        ans += i * (i + 1) / 2;
    }
    std::cout << ans << std::endl;
    return 0;
}