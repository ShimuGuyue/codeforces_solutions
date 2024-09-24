#include <iostream>
#include <map>

#define DEBUG 0

#if !DEBUG

void Mail_Stamps(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		Mail_Stamps();
		//std::cout << std::endl;
	}
	return 0;
}

void Mail_Stamps(void)
{
	using count = std::pair<int, int>;
	using node = std::pair<int, std::pair<int, int>>;

	int n;
	std::cin >> n;
	std::map<int, std::pair<int, int>> nodes;
	std::map<int, int> counts;
	while (n--)
	{
		int a, b;
		std::cin >> a >> b;

		nodes.insert({ a, { 0, 0 } });
		if (nodes[a].first == 0)
			nodes[a].first = b;
		else
			nodes[a].second = b;
		nodes.insert({ b, { 0, 0 } });
		if (nodes[b].first == 0)
			nodes[b].first = a;
		else
			nodes[b].second = a;

		++counts[a];
		++counts[b];
	}
	
	int x(0), y(0);
	for (count ct : counts)
	{
		if (ct.second == 1)
			if (x == 0)
				x = ct.first;
			else
				y = ct.first;
	}

	int now(x);
	int last(0);
	while (now != y)
	{
		std::cout << now << " ";
		if (nodes[now].first != last)
		{
			last = now;
			now = nodes[now].first;
		}
		else
		{
			last = now;
			now = nodes[now].second;
		}
	}
	std::cout << y << std::endl;
}

#else

#endif