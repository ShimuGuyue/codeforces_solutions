#include <iostream>

int main(void)
{
    std::string time;
    std::cin >> time;
    double m((time[3] - '0') * 10 + time[4] - '0');
    double h((time[0] - '0') * 10 + time[1] - '0' + m / 60);
    if (h >= 12)
        h -= 12;
    std::cout << h * 30 << " " << m * 6 << std::endl;
    return 0;
}