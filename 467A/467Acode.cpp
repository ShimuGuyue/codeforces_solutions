#include <iostream>
#include <vector>

int George_and_Accommodation(std::vector<int> p, std::vector<int> q);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> p;
	std::vector<int> q;
	while (n--)
	{
		int tempP, tempQ;
		std::cin >> tempP >> tempQ;
		p.push_back(tempP);
		q.push_back(tempQ);
	}
	std::cout << George_and_Accommodation(p, q) << std::endl;
	return 0;
}

int George_and_Accommodation(std::vector<int> p, std::vector<int> q)
{
	int count(0);
	for (std::vector<int>::iterator itP(p.begin()), itQ(q.begin()); itP != p.end() && itQ != q.end(); ++itP, ++itQ)
	{
		if (*itQ - *itP >= 2)
			++count;
	}
	return count;
}