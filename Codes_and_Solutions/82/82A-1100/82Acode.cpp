#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;
    int flag(1);
    while (n > flag * 5)
    {
        n -= flag * 5;
        flag *= 2;
    }
    if (n <= flag)
        std::cout << "Sheldon" << std::endl;
    else if (n <= flag * 2)
        std::cout << "Leonard" << std::endl;
    else if (n <= flag * 3)
        std::cout << "Penny" << std::endl;
    else if (n <= flag * 4)
        std::cout << "Rajesh" << std::endl;
    else if (n <= flag * 5)
        std::cout << "Howard" << std::endl;
    return 0;
}