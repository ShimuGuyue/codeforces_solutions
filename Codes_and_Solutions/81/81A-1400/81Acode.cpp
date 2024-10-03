#include <iostream>
#include <stack>

int main(void)
{
    std::string s;
    std::cin >> s;
    std::stack<char> k;
    bool erase(false);
    for (char c : s)
    {
        if (!k.empty() && c == k.top())
            k.pop();
        else
            k.push(c);
    }
    std::stack<char> ans;
    while (!k.empty())
    {
        ans.push(k.top());
        k.pop();
    }
    while (!ans.empty())
    {
        std::cout << ans.top();
        ans.pop();
    }
    std::cout << std::endl;
    return 0;
}