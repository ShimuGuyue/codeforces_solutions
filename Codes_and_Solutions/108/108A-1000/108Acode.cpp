#include <iostream>
#include <string>

int main(void)
{
    std::string t;
    std::cin >> t;
    std::string h_s(t.begin(), t.begin() + 2);
    std::string m_s(t.begin() + 3, t.end());
    int h(std::stoi(h_s));
    int m(std::stoi(m_s));
    while (1)
    {
        ++m;
        if (m == 60)
        {
            m = 0; ++h;
        }
        if (h == 24)
            h = 0;

        if (h < 10)
            h_s = "0" + std::to_string(h);
        else 
            h_s = std::to_string(h);
        if (m < 10)
            m_s = "0" + std::to_string(m);
        else 
            m_s = std::to_string(m);

        if (h_s.front() == m_s.back() && h_s.back() == m_s.front())
        {
            std::cout << h_s << ":" << m_s << std::endl;
            break;
        }
    }
    return 0;
}