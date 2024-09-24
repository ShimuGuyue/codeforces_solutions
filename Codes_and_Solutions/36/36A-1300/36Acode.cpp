#include <iostream>
#include <fstream>
#include <vector>

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

	int n;
	fin >> n;
	std::string s;
	fin >> s;
	std::vector<int> indexs;
	for (int i(0); i < n; ++i)
	{
		if (s[i] == '1')
			indexs.push_back(i);
	}
	for (int i(1); i < indexs.size() - 1; ++i)
	{
		if (indexs[i] - indexs[i - 1] != indexs[i + 1] - indexs[i])
		{
			fout << "NO" << std::endl;
			return;
		}
	}
	fout << "YES" << std::endl;

}

#else
int main(void)
{

	return 0;
}
#endif