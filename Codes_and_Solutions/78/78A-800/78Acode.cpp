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
    bool yes(true);
	for (int i(1); i <= 3; ++i)
	{
		std::string s;
		std::getline(std::cin, s);
		int count(0);
		for (char c : s)
		{
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
				++count;
			else ;
		}
		if (i == 1 || i == 3)
			if (count != 5)
				yes = false;
			else ;
		else if (i == 2)
			if (count != 7)
				yes = false;
			else ;
		else ;
	}
	if (yes)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}