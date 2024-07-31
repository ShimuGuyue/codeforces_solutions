#include <iostream>
#include <vector>
#include <algorithm>

struct dragon
{
	int trouble;
	int reward;
};

bool cmp(dragon a, dragon b);
bool Dragons(std::vector<dragon> vDrangon, int energy);

int main(void)
{
	int s, n;
	std::cin >> s >> n;
	std::vector<dragon> dragons;
	while (n--)
	{
		dragon tempDragon;
		std::cin >> tempDragon.trouble >> tempDragon.reward;
		dragons.push_back(tempDragon);
	}
	if (Dragons(dragons, s))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}

bool Dragons(std::vector<dragon> vDrangon, int energy)
{
	sort(vDrangon.begin(), vDrangon.end(), cmp);
	for (std::vector<dragon>::iterator it(vDrangon.begin()); it != vDrangon.end(); ++it)
	{
		if (energy > it->trouble)
			energy += it->reward;
		else
			return false;
	}
	return true;
}

bool cmp(dragon a, dragon b)
{
	return a.trouble < b.trouble;
}