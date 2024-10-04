#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;
    if (n % 2)
    {
        if (n == 1)
        {
            std::cout << "a" << std::endl;
            std::cout << "a" << std::endl;
            std::cout << "b" << std::endl;
            std::cout << "b" << std::endl;
        }
        else
        { 
            // row 1
            for (int i(1); i <= n; ++i)
            {
                if (i == n)
                    std::cout << "c";
                else if (i % 4 == 1 || i % 4 == 2)
                    std::cout << "a";
                else
                    std::cout << "b";
            }
            std::cout << std::endl;
            // row 2
            for (int i(1); i <= n; ++i)
            {
                if (i == n)
                    std::cout << "c";
                else if (i % 4 == 1 || i % 4 == 2)
                    std::cout << "b";
                else
                    std::cout << "a";
            }
            std::cout << std::endl;
            // row 3
            for (int i(1); i <= n; ++i)
            {
                if (i == 1)
                    std::cout << "c";
                else if (i % 4 == 2 || i % 4 == 3)
                    std::cout << "e";
                else
                    std::cout << "f";
            }
            std::cout << std::endl;
            // row 4
            for (int i(1); i <= n; ++i)
            {
                if (i == 1)
                    std::cout << "c";
                else if (i % 4 == 2 || i % 4 == 3)
                    std::cout << "f";
                else
                    std::cout << "e";
            }
            std::cout << std::endl;
        }
    }
    else
    {
        if (n == 2)
        {
            std::cout << "aa" << std::endl;
            std::cout << "bb" << std::endl;
            std::cout << "aa" << std::endl;
            std::cout << "bb" << std::endl;
        }
        else
        { 
            // row 1
            for (int i(1); i <= n; ++i)
            {
                if (i % 4 == 1 || i % 4 == 2)
                    std::cout << "a";
                else
                    std::cout << "b";
            }
            std::cout << std::endl;
            // row 2
            for (int i(1); i <= n; ++i)
            {
                if (i == 1 || i == n)
                    std::cout << "c";
                else if (i % 4 == 2 || i % 4 == 3)
                    std::cout << "e";
                else
                    std::cout << "f";
            }
            std::cout << std::endl;
            // row 3
            for (int i(1); i <= n; ++i)
            {
                if (i == 1 || i == n)
                    std::cout << "c";
                else if (i % 4 == 2 || i % 4 == 3)
                    std::cout << "f";
                else
                    std::cout << "e";
            }
            std::cout << std::endl;
            // row 4
            for (int i(1); i <= n; ++i)
            {
                if (i % 4 == 1 || i % 4 == 2)
                    std::cout << "a";
                else
                    std::cout << "b";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}