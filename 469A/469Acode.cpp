#include <iostream>
#include <vector>

bool I_Wanna_Be_the_Guy(int n, std::vector<int> via, std::vector<int> vib);

int main(void)
{
	int n;
	std::cin >> n;
	int p;
	std::cin >> p;
	std::vector<int> aP;
	while (p--)
	{
		int tempAP;
		std::cin >> tempAP;
		aP.push_back(tempAP);
	}
	int q;
	std::cin >> q;
	std::vector<int> aQ;
	while (q--)
	{
		int tempAQ;
		std::cin >> tempAQ;
		aQ.push_back(tempAQ);
	}
	if (I_Wanna_Be_the_Guy(n, aP, aQ))
		std::cout << "I become the guy." << std::endl;
	else
		std::cout << "Oh, my keyboard!" << std::endl;
	return 0;
}

bool I_Wanna_Be_the_Guy(int n, std::vector<int> via, std::vector<int> vib)
{
	std::vector<int> judgeCan(n);
	for (std::vector<int>::iterator it(via.begin()); it != via.end(); ++it)
	{
		judgeCan[*it - 1] = 1;
	}
	for (std::vector<int>::iterator it(vib.begin()); it != vib.end(); ++it)
	{
		judgeCan[*it - 1] = 1;
	}
	for (std::vector<int>::iterator it(judgeCan.begin()); it != judgeCan.end(); ++it)
	{
		if (*it == 0)
			return false;
	}
	return true;
}