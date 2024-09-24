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
    int gl, gr, bl, br;
    std::cin >> gl >> gr;
    std::cin >> bl >> br;
    if (bl >= gr - 1 && gr >= (bl - 1) / 2)
        std::cout << "YES" << std::endl;
    else if (br >= gl - 1 && gl >= (br - 1) / 2)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}