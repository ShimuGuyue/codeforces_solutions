#include <iostream>

#define DEBUG 0

#if !DEBUG

void You_re_Given_a_String_(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		You_re_Given_a_String_();
		//std::cout << std::endl;
	}
	return 0;
}

void You_re_Given_a_String_(void)
{
	std::string s;
	std::cin >> s;
	int ans(0);
	for (int l(s.size() - 1); l > 0; --l) //字串长度
	{
		for (int i(0); i + l < s.size(); ++i) //字串起始位置
		{
			std::string s1(s.begin() + i, s.begin() + i + l);
			for (int j(i + 1); j + l - 1 < s.size(); ++j) //重复字串起始位置
			{
				std::string s2(s.begin() + j, s.begin() + j + l);
				if (s1 == s2)
				{
					std::cout << l << std::endl;
					return;
				}
			}
		}
	}
	std::cout << 0 << std::endl;
}

#else

#endif