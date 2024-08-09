#include <iostream>

void Slavic_s_Exam();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Slavic_s_Exam();
		//std::cout << std::endl;
	}
	return 0;
}

void Slavic_s_Exam()
{
	std::string s;
	std::string t;
	std::cin >> s;
	std::cin >> t;
	int i(0);
	int j(0);
	int n(s.size());
	int m(t.size());
	while (i < n)
	{
		if (j < m)
		{
			if (s[i] == t[j])
				++j;
			else if (s[i] == '?')
			{
				s[i] = t[j];
				++j;
			}
		}
		else
		{
			if (s[i] == '?')
			{
				s[i] = 'a';
				++j;
			}
		}
		++i;
	}
	if (j < m)
		std::cout << "NO" << std::endl;
	else
	{
		std::cout << "YES" << std::endl;
		std::cout << s << std::endl;
	}
}