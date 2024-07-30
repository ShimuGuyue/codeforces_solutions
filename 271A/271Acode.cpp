#include <iostream>
#include <string>

int Beautiful_Year(int a);

int main(void)
{
	int y;
	std::cin >> y;
	std::cout << Beautiful_Year(y) << std::endl;
	return 0;
}

int Beautiful_Year(int a)
{
	while (++a)
	{
		std::string tostrA(std::to_string(a));
		char a1 = tostrA[0];
		char a2 = tostrA[1];
		char a3 = tostrA[2];
		char a4 = tostrA[3];
		if (a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4)
			return a;
	}
}