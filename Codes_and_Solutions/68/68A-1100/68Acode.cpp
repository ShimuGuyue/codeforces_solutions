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
    int p[4];
    int a, b;
    std::cin >> p[0] >> p[1] >> p[2] >> p[3] >> a >> b;
    int ans(0);
    for (int i(a); i <= b; ++i)
    {
        int count(0);
        for (int v(0); v < 4; ++v)
        {
            for (int u(0); u < 4; ++u)
            {
                if (u == v)
                    continue;
                for (int n(0); n < 4; ++n)
                {
                    if (n == v || n == u)
                        continue;
                    for (int m(0); m < 4; ++m)
                    {
                        if (m == v || m == u || m == n)
                            continue;
                        if (i % p[v] % p[u] % p[n] % p[m] == i)
                            ++count;
                    }
                }
            }
        }
        if (count >= 7)
            ++ans;
    }
    std::cout << ans << std::endl;
}