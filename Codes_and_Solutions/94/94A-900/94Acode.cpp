#include <iostream>
#include <map>

int main(void)
{
    std::string code;
    std::cin >> code;
    std::map<std::string, int> nums;
    for (int i(0); i < 10; ++i)
    {
        std::string s;
        std::cin >> s;
        nums[s] = i;
    }
    for (int i(0); i < 8; ++i)
    {
        std::string s(code.begin() + i * 10, code.begin() + (i + 1) * 10);
        std::cout << nums[s];
    }
    std::cout << std::endl;
    return 0;
}