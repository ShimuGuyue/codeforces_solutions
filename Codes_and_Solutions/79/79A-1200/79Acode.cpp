#include <iostream>

void solve(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		solve();
		//std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
    int x, y;
    std::cin >> x >> y;
    int i(1);
    while (1)
    {
        if (i % 2 == 1) // Ciel
        {
            if (x >= 2 && y >= 2)
            {
                x -= 2;
                y -= 2;
            }
            else if (x == 1 && y >= 12)
            {
                x -= 1;
                y -= 12;
            }
            else if (x == 0 && y >= 22)
            {
                y -= 22;
            }
            else
            {
                std::cout << "Hanako" << std::endl;
                break;
            }
        }
        else // Hanako
        {
            if (y >= 22)
            {
                y -= 22;
            }
            else if (y >= 12 && x >= 1)
            {
                y -= 12;
                x -= 1;
            }
            else if (y >= 2 && x >= 2)
            {
                y -= 2;
                x -= 2;
            }
            else
            {
                std::cout << "Ciel" << std::endl;
                break;
            }
        }
        ++i;
    }
}