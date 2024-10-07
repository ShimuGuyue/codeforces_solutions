#include <iostream>

int main(void)
{
    std::string x;
    std::cin >> x;
    int ans(0);
    while (x.size() > 1)
    {
        ++ans;
        if (x.back() == '0')
        {
            x.pop_back();
        }
        else if (x.back() == '1')
        {
            for (std::string::reverse_iterator it(x.rbegin()); it != x.rend(); ++it)
            {
                if (*it == '1')
                    *it = '0';
                else if (*it == '0')
                {
                    *it = '1';
                    break;
                }

                if (it == x.rend() - 1)
                {
                    x = "1" + x;
                    break;
                } 
            }
        }
    }
    std::cout << ans << std::endl;
    return 0;
}