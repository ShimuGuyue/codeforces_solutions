#include <iostream>
#include <map>

void Polycarp_s_Pockets();

int main(void)
{
	Polycarp_s_Pockets();
	return 0;
}

void Polycarp_s_Pockets()
{
	std::map<int, int> counts;
	int max(0);
	int n;
	std::cin >> n;
	while (n--)
	{
		int a;
		std::cin >> a;
		++counts[a];
		max = std::max(max, counts[a]);
	}
	std::cout << max << std::endl;
}