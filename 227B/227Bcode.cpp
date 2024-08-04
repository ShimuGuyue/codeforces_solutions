#include <iostream>
#include <map>

void Effective_Approach();

int main(void)
{
	Effective_Approach();
	return 0;
}

void Effective_Approach()
{
	int n; std::cin >> n;
	std::map<int, int> a;
	for (int i(1); i <= n; ++i)
	{
		int data; std::cin >> data;
		a[data] = i;
	}
	int m; std::cin >> m;
	long long Vasya(0);
	long long Petya(0);
	while (m--)
	{
		int b; std::cin >> b;
		Vasya += a[b];
		Petya += n + 1 - a[b];
	}
	std::cout << Vasya << " " << Petya << std::endl;
}