#include <iostream>
#include <stack>

#define DEBUG 0

#if !DEBUG

void Regular_Bracket_Sequence(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Regular_Bracket_Sequence();
		//std::cout << std::endl;
	}
	return 0;
}

void Regular_Bracket_Sequence(void)
{
	std::string brackets;
	std::cin >> brackets;
	int maxLength(0);
	std::stack<char> k;
	for (char c : brackets)
	{
		if (c == '(')
		{
			k.push(c);
			++maxLength;
		}
		else
		{
			if (!k.empty())
			{
				k.pop();
				++maxLength;
			}
		}
	}
	maxLength -= k.size();
	std::cout << maxLength;
}

#else

#endif