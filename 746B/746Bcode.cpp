#include <iostream>
#include <deque>

void Decoding();

int main(void)
{
	Decoding();
	return 0;
}

void Decoding()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::deque<char> ans;
	if(n % 2)
		for (int i(0); i < n; ++i)
		{
			if (i % 2)
				ans.push_front(s[i]);
			else
				ans.push_back(s[i]);
		}
	else
		for (int i(0); i < n; ++i)
		{
			if (i % 2)
				ans.push_back(s[i]);
			else
				ans.push_front(s[i]);
		}
	for (char c : ans)
	{
		std::cout << c;
	}
	std::cout << std::endl;
}