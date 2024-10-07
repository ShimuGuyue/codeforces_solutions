#include <iostream>
#include <vector>
#include <map>

int main(void)
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    std::map<int, int> countV;
    int max(0);
    int min(10000);
    int sum(0);
    for (int& i : v)
    {
        std::cin >> i;
        ++countV[i];
        sum += i;
        max = std::max(max, i);
        min = std::min(min, i);
    }

    if (max == min)
    {
        std::cout << "Exemplary pages." << std::endl;
        return 0;
    }

    if (sum % n)
    {
        std::cout << "Unrecoverable configuration." << std::endl;
        return 0;
    }

    int ave(sum / n);
    int countSmall(0);
    int countBig(0);
    for (std::pair<int, int> di : countV)
    {
        if (di.first < ave)
            countSmall += di.second;
        else if (di.first > ave)
            countBig   += di.second;
    }
    // std::cout << ave << std::endl;
    // std::cout << countBig << " " << countSmall << std::endl;

    if (countBig != 1 || countSmall != 1 || max - ave != ave - min || (max - min) % 2)
    {
        std::cout << "Unrecoverable configuration." << std::endl;
        return 0;
    }

    std::cout << (max - min) / 2 << " ml. ";
    int flag1, flag2;
    for (int i(0); i < n; ++i)
    {
        if (v[i] == min)
            flag1 = i + 1;
        else if (v[i] == max)
            flag2 = i + 1;
    }
    std::cout << "from cup #" << flag1 << " to cup #" << flag2 << "." << std::endl;
    return 0;
}