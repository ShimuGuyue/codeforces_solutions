#include <iostream>
#include <fstream>

#define DEBUG 0

#if !DEBUG

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
	std::ifstream fin("input.txt");
	std::ofstream fout("output.txt");

	int loc;
	fin >> loc;
	int n(3);
	while (n--)
	{
		int a, b;
		fin >> a >> b;
		if (a == loc)
			loc = b;
		else if (b == loc)
			loc = a;
	}
	fout << loc << std::endl;
}

#else
int main(void)
{

	return 0;
}
#endif