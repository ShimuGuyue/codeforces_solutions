#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;
    n -= 10;
    if (n <= 0)
        std::cout << 0 << std::endl;
    else if (n < 10)
        std::cout << 4 << std::endl;
    else if (n == 10)
        std::cout << 15 << std::endl;
    else if (n == 11)
        std::cout << 4 << std::endl;
    else
        std::cout << 0 << std::endl;
    return 0;
}