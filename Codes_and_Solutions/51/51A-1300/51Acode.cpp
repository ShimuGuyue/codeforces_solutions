#include <iostream>
#include <vector>

struct amulets
{
    char first;
    char second;
    char third;
    char fourth;
};

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
    int n;
    std::cin >> n;
    std::vector<amulets> piles;
    while (n--)
    {
        std::string a;
        std::string b;
        std::cin >> a;
        std::cin >> b;
        amulets amulet;
        amulet.first = a.front();
        amulet.second = a.back();
        amulet.third = b.back();
        amulet.fourth = b.front();
        bool find(false);
        for (amulets am : piles)
        {
            if(am.first == amulet.first && am.second == amulet.second && am.third == amulet.third && am.fourth == amulet.fourth)
            {
                find = true;
                break;
            }
            if(am.first == amulet.second && am.second == amulet.third && am.third == amulet.fourth && am.fourth == amulet.first)
            {
                find = true;
                break;
            }
            if(am.first == amulet.third && am.second == amulet.fourth && am.third == amulet.first && am.fourth == amulet.second)
            {
                find = true;
                break;
            }
            if(am.first == amulet.fourth && am.second == amulet.first && am.third == amulet.second && am.fourth == amulet.third)
            {
                find = true;
                break;
            }
        }
        if (!find)
        {
            piles.push_back(amulet);
        }

        if (n)
        {
            std::string dif;
            std::cin >> dif;
        }
    }
    std::cout << piles.size() << std::endl;
}