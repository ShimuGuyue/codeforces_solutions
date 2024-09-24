#include <iostream>
#include <map>

#define DEBUG 0

#if !DEBUG

void Next_Test(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Next_Test();
		//std::cout << std::endl;
	}
	return 0;
}

void Next_Test(void)
{
	int n;
	std::cin >> n;
	std::map<int, int> idexs;
	while (n--)
	{
		int a;
		std::cin >> a;
		++idexs[a];
	}
	for (int i(1); i <= 3001; ++i)
	{
		if (idexs.find(i) == idexs.end())
		{
			std::cout << i << std::endl;
			return;
		}
	}
}

#else

#endif