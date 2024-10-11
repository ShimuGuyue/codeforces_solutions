#include <iostream>
#include <vector>

int main(void)
{
    int n;
    std::cin >> n;
    std::vector<int64_t> a(n);
    for (int64_t& i : a)
    {
        std::cin >> i;
    }
    int64_t ans(0);
    for (int i(0); i < n; ++i)
    {
        ans += (a[i] - 1) * i + a[i];
    }
    std::cout << ans << std::endl;
    return 0;
}