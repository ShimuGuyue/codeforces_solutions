#include <iostream>
#include <string>
#include <stack>

void Spreadsheets();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Spreadsheets();
		//std::cout << std::endl;
	}
	return 0;
}

void Spreadsheets()
{
	std::string loc;
	std::cin >> loc;
	int mode(1);
	int len(loc.length());
	for (int i(1); i < len - 1; ++i)
	{
		if (loc.at(i) == 'C' && isdigit(loc.at(i - 1)) && isdigit(loc.at(i + 1)))
		{
			mode = 2;
			break;
		}
	}
	if (mode == 1)
	{
		std::string r;
		int c(0);
		for (char ch : loc)
		{
			if (isdigit(ch))
				r += ch;
			else
				c = c * 26 + ch - 'A' + 1;
		}
		std::cout << "R" << r << "C" << c << std::endl;
	}
	else
	{
		std::string c;
		std::string r;
		bool isC(false);
		for (char ch : loc)
		{
			if (ch == 'R')
				continue;
			if (ch == 'C')
			{
				isC = true;
				continue;
			}
			if (isC)
				c += ch;
			else
				r += ch;
		}
		int c_(stoi(c));
		std::stack<char> alpha;
		while (c_)
		{
			int temp(c_ % 26);
			if (temp == 0)
			{
				alpha.push('Z');
				c_ -= 26;
			}
			else
				alpha.push('A' + temp - 1);
			c_ -= c_ % 26;
			c_ /= 26;
		}
		while (!alpha.empty())
		{
			std::cout << alpha.top();
			alpha.pop();
		}
		std::cout << r << std::endl;
	}
}