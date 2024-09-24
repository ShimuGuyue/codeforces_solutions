#include <iostream>
#include <string>
#include <vector>

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
    int a, b;
    std::cin >> a >> b;
    std::string strA(std::to_string(a));
    std::string strB(std::to_string(b));

    int system(0);
    while (a)
    {
        system = std::max(system, a % 10);
        a /= 10;
    }
    while (b)
    {
        system = std::max(system, b % 10);
        b /= 10;
    }
    ++system;

    int len(std::max(strA.size(), strB.size()));
    std::vector<int> aa(len);
    std::vector<int> bb(len);
    std::vector<int> sum(len);
    for (int i(0); i < strA.size(); ++i)
    {
        *(aa.rbegin() + i) = *(strA.rbegin() + i) - '0';
    }
    for (int i(0); i < strB.size(); ++i)
    {
        *(bb.rbegin() + i) = *(strB.rbegin() + i) - '0';
    }
    for (int i(0); i < len - 1; ++i)
    {
        *(sum.rbegin() + i) +=  *(aa.rbegin() + i) + *(bb.rbegin() + i);
        if (*(sum.rbegin() + i) >= system)
        {
            *(sum.rbegin() + i) -= system;
            ++*(sum.rbegin() + i + 1);
        }
    }
    sum.front() += aa.front() + bb.front();
    int ans(sum.front() >= system ? len + 1 : len);
    std::cout << ans << std::endl;
}