#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;
    for (int x(0); x * 4 <= n; ++x)
    {
        int temp(n - x * 4);
        if (temp % 7 == 0)
        {
            int y(temp / 7);
            for (int i(0); i < x; ++i)
            {
                std::cout << 4;
            }
            for (int i(0); i < y; ++i)
            {
                std::cout << 7;
            }
            std::cout <<std::endl;
            return 0;
        }
    }
    std::cout << -1 << std::endl;
    return 0;
}