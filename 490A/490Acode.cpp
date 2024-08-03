#include <iostream>
#include <vector>

void Team_Olympiad(std::vector<int> vi);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> talent;
	while (n--)
	{
		int tempTalent;
		std::cin >> tempTalent;
		talent.push_back(tempTalent);
	}
	Team_Olympiad(talent);
	return 0;
}

void Team_Olympiad(std::vector<int> vi)
{
	std::vector<int> talent1;
	std::vector<int> talent2;
	std::vector<int> talent3;
	for (int i(0); i < vi.size(); ++i)
	{
		if (vi[i] == 1)
			talent1.push_back(i + 1);
		else if (vi[i] == 2)
			talent2.push_back(i + 1);
		else if (vi[i] == 3)
			talent3.push_back(i + 1);
	}
	int len(std::min(std::min(talent1.size(), talent2.size()), talent3.size()));
	std::cout << len << std::endl;
	for (int i(0); i < len; ++i)
	{
		std::cout << talent1[i] << " " << talent2[i] << " " << talent3[i] << std::endl;
	}
	return;
}