#include <iostream>

int turn(char c);
bool bigger(char a, char b);

int main(void)
{
    char tramp;
    std::cin >> tramp;
    std::string a, b;
    std::cin >> a >> b;
    if (a.back() == tramp)
        if (b.back() == tramp)
            if (bigger(a.front(), b.front()))
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        else
            std::cout << "YES" << std::endl;
    else
        if (a.back() == b.back())
            if (bigger(a.front(), b.front()))
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        else
            std::cout << "NO" << std::endl;
    return 0;
}

bool bigger(char a, char b)
{
    int aa(turn(a));
    int bb(turn(b));
    return aa > bb;
}

int turn(char c)
{
    if (c == '6')
        return 0;
    if (c == '7')
        return 1;
    if (c == '8')
        return 2;
    if (c == '9')
        return 3;
    if (c == 'T')
        return 4;
    if (c == 'J')
        return 5;
    if (c == 'Q')
        return 6;
    if (c == 'K')
        return 7;
    if (c == 'A')
        return 8;
    return -1;
}