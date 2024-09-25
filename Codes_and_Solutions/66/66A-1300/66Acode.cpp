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
    std::string s;
    std::cin >> s;
    int len(s.size());
    if (s.front() == '-')
    {
        --len;
        if (len < 3)
            std::cout << "byte" << std::endl;
        else if (len == 3)
            if (s <= "-128")
                std::cout << "byte" << std::endl;
            else
                std::cout << "short" << std::endl;
        else if (len < 5)
            std::cout << "short" << std::endl;
        else if (len == 5)
            if (s <= "-32768")
                std::cout << "short" << std::endl;
            else
                std::cout << "int" << std::endl;
        else if (len < 10)
            std::cout << "int" << std::endl;
        else if (len == 10)
            if (s <= "-2147483648")
                std::cout << "int" << std::endl;
            else
                std::cout << "long" << std::endl;
        else if (len < 19)
            std::cout << "long" << std::endl;
        else if (len == 19)
            if (s <= "-9223372036854775808")
                std::cout << "long" << std::endl;
            else
                std::cout << "BigInteger" << std::endl;
        else
            std::cout << "BigInteger" << std::endl;
    }
    else
    {
        if (len < 3)
            std::cout << "byte" << std::endl;
        else if (len == 3)
            if (s <= "127")
                std::cout << "byte" << std::endl;
            else
                std::cout << "short" << std::endl;
        else if (len < 5)
            std::cout << "short" << std::endl;
        else if (len == 5)
            if (s <= "32767")
                std::cout << "short" << std::endl;
            else
                std::cout << "int" << std::endl;
        else if (len < 10)
            std::cout << "int" << std::endl;
        else if (len == 10)
            if (s <= "2147483647")
                std::cout << "int" << std::endl;
            else
                std::cout << "long" << std::endl;
        else if (len < 19)
            std::cout << "long" << std::endl;
        else if (len == 19)
            if (s <= "9223372036854775807 ")
                std::cout << "long" << std::endl;
            else
                std::cout << "BigInteger" << std::endl;
        else
            std::cout << "BigInteger" << std::endl;
    }
}