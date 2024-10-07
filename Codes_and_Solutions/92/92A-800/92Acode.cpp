#include <iostream>

int main(void)
{
    int n, m;
    std::cin >> n >> m;
    int flag(1);
    while (m >= flag)
    {
        m -= flag;
        if (flag == n)
            flag = 1;
        else
            ++flag;
    }
    std::cout << m << std::endl;
    return 0;
}