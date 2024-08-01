#include <iostream>
#include <map>

int gcd(int a, int b);
void k_String();

int main(void)
{
	k_String();
	return 0;
}

void k_String()
{
	int k;
	std::cin >> k;
	std::string s;
	std::cin >> s;
	std::map<char, int> counts;
	for (char c : s)
	{
		++counts[c];
	}
	int min(INT_MAX);
	for (std::pair<char, int> ci : counts)
	{
		if (ci.second % k)
		{
			std::cout << -1 << std::endl;
			return;
		}
		if (min == INT_MAX)
			min = ci.second;
		else
			min = gcd(min, ci.second);
	}
	std::string ans;
	for (std::pair<char, int> ci : counts)
	{
		int count(ci.second / min);
		while (count--)
		{
			ans += ci.first;
		}
	}
	int count(s.size() / ans.size());
	while (count--)
	{
		std::cout << ans;
	}
	std::cout << std::endl;
}

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	gcd(b, a % b);
}