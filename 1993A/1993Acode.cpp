#include <iostream>

void Question_Marks();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Question_Marks();
		//std::cout << std::endl;
	}
	return 0;
}

void Question_Marks()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int a(0);
	int b(0);
	int c(0);
	int d(0);
	for (char cc : s)
	{
		if (cc == 'A')
			++a;
		else if (cc == 'B')
			++b;
		else if (cc == 'C')
			++c;
		else if (cc == 'D')
			++d;
	}
	int sum(0);
	sum += a > n ? n : a;
	sum += b > n ? n : b;
	sum += c > n ? n : c;
	sum += d > n ? n : d;
	std::cout << sum << std::endl;
}