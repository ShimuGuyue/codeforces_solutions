#include <iostream>
#include <vector>

std::string Queue_at_the_School(std::string s, int t);

int main(void)
{
	int n, t;
	std::cin >> n >> t;
	std::string s;
	std::cin >> s;
	std::cout << Queue_at_the_School(s, t) << std::endl;;

	return 0;
}

std::string Queue_at_the_School(std::string s, int t)
{
	while (t--)
	{
		for (std::string::iterator it(s.begin()); it != s.end() - 1 && it != s.end(); )
		{
			if (*it == 'B' && *(it + 1) == 'G')
			{
				*it = 'G';
				*(it + 1) = 'B';
				it += 2;
			}
			else
				++it;
		}
	}
	return s;
}