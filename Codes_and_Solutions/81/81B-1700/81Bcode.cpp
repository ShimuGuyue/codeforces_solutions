#include <iostream>
#include <queue>

int main(void)
{
    std::string s;
    std::getline(std::cin, s);
    std::queue<std::string> q;
    std::string flag;
    bool lastIsDight(false);
    bool otherDigit(false);
    for (int i(0); i < s.size(); ++i)
    {
        char c(s[i]);
        if (c == ' ')
        {
            if (lastIsDight == true)
                otherDigit = true;
        }
        else if (c == '.')
        {
            lastIsDight = false;
            otherDigit = false;
            if (flag.empty())
            {
                flag = "...";
            }
            else
            {
                q.push(flag);
                flag = "...";
            }
            i += 2;
        }
        else if (isdigit(c))
        {
            lastIsDight = true;
            if (otherDigit)
            {
                otherDigit = false;
                if (!flag.empty())
                {
                    q.push(flag);
                    flag.clear();
                }
                flag += c;
            }
            else
                flag += c;
        }
        else if (c == ',')
        {
            lastIsDight = false;
            otherDigit = false;
            flag += c;
            q.push(flag);
            flag.clear();
        }
    }
    if (!flag.empty())
        q.push(flag);
    while (!q.empty())
    {
        std::cout << q.front();
        q.pop();
        if (!q.empty())
            std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}