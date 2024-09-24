#include <iostream>

#define DEBUG 0

#if !DEBUG

void BerOS_file_system(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		BerOS_file_system();
		//std::cout << std::endl;
	}
	return 0;
}

void BerOS_file_system(void)
{
	std::string s;
	std::cin >> s;
	std::string ans;
	bool out(true);
	for (char c : s)
	{
		if (c == '/')
			if (out)
			{
				ans += c;
				out = false;
			}
			else
				;
		else
		{
			ans += c;
			out = true;
		}
	}
	while (ans.back() == '/' && ans.size() != 1)
	{
		ans.pop_back();
	}
	std::cout << ans << std::endl; 
}

#else

#endif