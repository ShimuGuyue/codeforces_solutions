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
    std::string problem;
    getline(std::cin, problem);
    for (std::string::reverse_iterator it(problem.rbegin()); it != problem.rend(); ++it)
    {
        if (isalpha(*it))
        {
            if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' || *it == 'y')
            {
                std::cout << "YES" << std::endl;
                return;
            }
            if (*it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U' || *it == 'Y')
            {
                std::cout << "YES" << std::endl;
                return;
            }
            std::cout << "NO" << std::endl;
            return;
        }
    }
}