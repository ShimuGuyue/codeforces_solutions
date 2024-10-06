#include <iostream>

int main(void)
{
    int r, g, b;
    std::cin >> r >> g >> b;
    int ans(0);
    while (r > 0 || g > 0 || b > 0)
    {
        if (ans % 3 == 0)
            if (r > 0)
                r -= 2;
            else ;
        else if (ans % 3 == 1)
            if (g > 0)
                g -= 2;
            else ;
        else if (ans % 3 == 2)
            if (b > 0)
                b -= 2;
            else ;
        
        ++ans;
    }
    ans += 29;
    std::cout << ans << std::endl;
    return 0;
}