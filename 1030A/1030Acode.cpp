#include <iostream>
#include <vector>

bool In_Search_of_an_Easy_Problem(std::vector<int> v);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> opinions;
	while (n--)
	{
		int tempOpinion;
		std::cin >> tempOpinion;
		opinions.push_back(tempOpinion);
	}
	if (In_Search_of_an_Easy_Problem(opinions))
		std::cout << "HARD" << std::endl;
	else
		std::cout << "EASY" << std::endl;
	return 0;
}

bool In_Search_of_an_Easy_Problem(std::vector<int> v)
{
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		if (*it == 1)
			return true;
	}
	return false;
}