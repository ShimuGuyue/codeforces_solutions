#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main(void)
{
    std::string s;
    std::cin >> s;
    int k;
    std::cin >> k;

    std::map<char, int> alphas_M;
    for (char c : s)
    {
        ++alphas_M[c];
    }

    std::vector<std::pair<char, int>> alphas_V;
    for (std::pair<char, int> ci : alphas_M)
    {
        alphas_V.push_back(ci);
    }
    std::sort(alphas_V.begin(), alphas_V.end(), 
        [](std::pair<char, int> a, std::pair<char, int> b)
        {
            return a.second > b.second;
        });

    while (alphas_V.back().second <= k)
    {
        k -= alphas_V.back().second;
        alphas_V.pop_back();
    }

    alphas_M.clear();
    for (std::pair<char, int> ci : alphas_V)
    {
        alphas_M.insert(ci);
    }

    std::cout << alphas_M.size() << std::endl;
    for (char c : s)
    {
        if (alphas_M[c])
        {
            std::cout << c;
            --alphas_M[c];
        }
    }
    std::cout << std::endl;

    return 0;
}