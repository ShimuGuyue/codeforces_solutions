#include <iostream>
#include <vector>

struct Computer
{
    int speed;
    int ram;
    int hdd;
    int cost;
};

int main(void)
{
    int n;
    std::cin >> n;
    std::vector<Computer> computers(n);
    for (Computer& C : computers)
    {
        std::cin >> C.speed >> C.ram >> C.hdd >> C.cost;
    }
    int ans;
    int min(1000);
    for (int i(0); i < n; ++i)
    {
        bool ok(true);
        for (int j(0); j < n; ++j)
        {
            if (i == j)
                continue;

            if (computers[i].speed < computers[j].speed && 
                computers[i].ram   < computers[j].ram   &&
                computers[i].hdd   < computers[j].hdd)
            {
                ok = false;
                break;
            }
        }
        if (ok && computers[i].cost <= min)
        {
            min = computers[i].cost;
            ans = i + 1;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}