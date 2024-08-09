#include <iostream>

int gcd(int a, int b);
int lcm(int a, int b);
void String_LCM();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		String_LCM();
		//std::cout << std::endl;
	}
	return 0;
}

void String_LCM()
{
	std::string s;
	std::string t;
	std::cin >> s;
	std::cin >> t;
	int length(lcm(s.length(), t.length()));
	int countS(length / s.length());
	int countT(length / t.length());
	std::string flagS;
	std::string flagT;
	while (countS--)
	{
		flagS += s;
	}
	while (countT--)
	{
		flagT += t;
	}
	if (flagS == flagT)
		std::cout << flagS << std::endl;
	else
		std::cout << -1 << std::endl;
}

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}