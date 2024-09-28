#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

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
    std::string myName;
    std::cin >> myName;
    int n;
    std::cin >> n;
    std::cin.get();
    std::map<std::string, int> namesMap;
    while (n--)
    {
        std::string s;
        getline(std::cin, s);
        int mode(1);
        std::string x;
        std::string action;
        std::string y;
        for (char c : s)
        {
            if (mode == 1)
                if (c == ' ')
                    mode = 2;
                else
                    x += c;
            else if (mode == 2)
                if (c == ' ')
                    mode = 3;
                else action += c;
            else if (mode == 3)
                if (action == "posted" || action == "commented")
                    if (c == ' ')
                        mode = 4;
                    else ;
                else if (action == "likes")
                    if (c == '\'')
                        break;
                    else
                        y += c;
                else ;
            else if (mode == 4)
                if (c == '\'')
                    break;
                else
                    y += c;
        }
        if (x == myName)
        {
            if (action == "posted")
                namesMap[y] += 15;
            else if (action == "commented")
                namesMap[y] += 10;
            else if (action == "likes")
                namesMap[y] += 5;
        }
        else if (y == myName)
        {
            if (action == "posted")
                namesMap[x] += 15;
            else if (action == "commented")
                namesMap[x] += 10;
            else if (action == "likes")
                namesMap[x] += 5;
        }
        else
        {
            namesMap.insert({x, 0});
            namesMap.insert({y, 0});
        }
    }
    std::vector<std::pair<std::string, int>> namesVector;
    for (std::pair<std::string, int> si : namesMap)
    {
        namesVector.push_back(si);
    }
    std::sort(namesVector.begin(), namesVector.end(), [](std::pair<std::string, int> a, std::pair<std::string, int> b)
        {
            if (a.second != b.second)
                return a.second > b.second;
            return a.first < b.first;
        });
    for (std::pair<std::string, int> si : namesVector)
    {
        std::cout << si.first << std::endl;
    }
}