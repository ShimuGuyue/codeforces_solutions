#include <iostream>
#include <stack>

void Even_Positions();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Even_Positions();
		//std::cout << std::endl;
	}
	return 0;
}

void Even_Positions()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int l(0);
	for (int i(0); i < n; ++i)
	{
		if (s[i] == '(')
			++l;
		else if (s[i] == ')')
			--l;
		else
			if (l)
			{
				s[i] = ')';
				--l;
			}
			else
			{
				s[i] = '(';
				++l;
			}
	}
	std::stack<int> k;
	int ans(0);
	for (int i(0); i < n; ++i)
	{
		if (s[i] == '(')
			k.push(i);
		else
		{
			ans += i - k.top();
			k.pop();
		}
	}
	std::cout << ans << std::endl;
}