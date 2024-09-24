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
    std::string Fyodor;
    std::string Matroskin;
    std::string Sharic;
    std::cin >> Fyodor;
    std::cin >> Matroskin;
    std::cin >> Sharic;

    if(Fyodor == "rock" && Matroskin == "scissors" && Sharic == "scissors")
    {
        std::cout << "F" << std::endl;
        return;
    }
    if(Fyodor == "scissors" && Matroskin == "paper" && Sharic == "paper")
    {
        std::cout << "F" << std::endl;
        return;
    }
    if(Fyodor == "paper" && Matroskin == "rock" && Sharic == "rock")
    {
        std::cout << "F" << std::endl;
        return;
    }

    if(Matroskin == "rock" && Fyodor == "scissors" && Sharic == "scissors")
    {
        std::cout << "M" << std::endl;
        return;
    }
    if(Matroskin == "scissors" && Fyodor == "paper" && Sharic == "paper")
    {
        std::cout << "M" << std::endl;
        return;
    }
    if(Matroskin == "paper" && Fyodor == "rock" && Sharic == "rock")
    {
        std::cout << "M" << std::endl;
        return;
    }

    if(Sharic == "rock" && Matroskin == "scissors" && Fyodor == "scissors")
    {
        std::cout << "S" << std::endl;
        return;
    }
    if(Sharic == "scissors" && Matroskin == "paper" && Fyodor == "paper")
    {
        std::cout << "S" << std::endl;
        return;
    }
    if(Sharic == "paper" && Matroskin == "rock" && Fyodor == "rock")
    {
        std::cout << "S" << std::endl;
        return;
    }

    std::cout << "?" << std::endl;
}