#include <iostream>
#include <vector>
#include <algorithm>

struct Fruit
{
	std::string name;
	int count;
};

void Fruits(void);

int main(void)
{
	Fruits();
	return 0;
}

void Fruits(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> prices(n);
	for (int& i : prices)
	{
		std::cin >> i;
	}
	sort(prices.begin(), prices.end());
	std::vector<Fruit> fruits;
	while (m--)
	{
		std::string fruit;
		std::cin >> fruit;
		bool found(false);
		for (Fruit& F : fruits)
		{
			if (F.name == fruit)
			{
				++F.count;
				found = true;
				break;
			}
		}
		if (!found)
			fruits.push_back({ fruit, 1 });
	}
	sort(fruits.begin(), fruits.end(),
		[](Fruit a, Fruit b) -> bool { return a.count > b.count; });
	int min(0);
	int max(0);
	for (int i(0); i < fruits.size(); ++i)
	{
		min += fruits[i].count * prices[i];
	}
	for (int i(0); i < fruits.size(); ++i)
	{
		max += fruits[i].count * prices[prices.size() - 1 - i];
	}
	std::cout << min << " " << max << std::endl;
}