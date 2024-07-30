#include <iostream>
#include <vector>
#include <map>

int Is_your_horseshoe_on_the_other_hoof(std::vector<int> vi);

int main(void)
{
	std::vector<int> horseShoes;
	for (int i(1); i <= 4; ++i)
	{
		int tempHorseShoe;
		std::cin >> tempHorseShoe;
		horseShoes.push_back(tempHorseShoe);
	}
	std::cout << Is_your_horseshoe_on_the_other_hoof(horseShoes) << std::endl;
	return 0;
}

int Is_your_horseshoe_on_the_other_hoof(std::vector<int> vi)
{
	std::map<int, int> horseShoes;
	for (std::vector<int>::iterator it(vi.begin()); it != vi.end(); ++it)
	{
		++horseShoes[*it];
	}
	return 4 - horseShoes.size();
}