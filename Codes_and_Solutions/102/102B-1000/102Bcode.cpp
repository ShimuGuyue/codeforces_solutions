#include <iostream>

int main(void)
{
    std::string n;
    std::cin >> n;

    if (n.length() == 1)
    {
        std::cout << 0 << std::endl;
        return 0;
    }

    int sum(0);
    for (char c : n)
    {
        sum += c - '0';
    }
    int ans(1);
    while (sum >= 10)
    {
        int temp(0);
        while (sum)
        {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
        ++ans;
    }
    std::cout << ans << std::endl;
    return 0;
}