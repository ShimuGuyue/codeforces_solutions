#include <iostream>

int main(void)
{
    std::string s;
    std::cin >> s;
    for (int i(0); i < s.size(); ++i)
    {
        if (s[i] == '.')
        {
            if (s[i - 1] == '9')
            {
                std::cout << "GOTO Vasilisa." << std::endl;
                return 0;
            }

            for (int j(0); j < i - 1; ++j)
            {
                std::cout << s[j]; 
            }
            char end(s[i + 1] >= '5' ? s[i - 1] + 1 : s[i - 1]);
            std::cout << end << std::endl;
            break;
        }
    }
    return 0;
}