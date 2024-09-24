#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define DEBUG 0

#if !DEBUG

void solve(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		solve();
		//std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
	std::string s;
	std::cin >> s;
	std::vector<int> numbers;
	std::string num;
	for (char c : s)
	{
		if (c == ',')
		{
			numbers.push_back(stoi(num));
			num = "";
		}
		else
			num += c;
	}
	numbers.push_back(stoi(num));
	sort(numbers.begin(), numbers.end());
	int m(numbers.size());

	int begin(numbers.front());
	for (int i(1); i < m; ++i)
	{
		if (numbers[i] - numbers[i - 1] > 1)
		{
			if (numbers[i - 1] == begin)
				std::cout << begin << ",";
			else
				std::cout << begin << "-" << numbers[i - 1] << ",";
			begin = numbers[i];
		}
	}
	if (numbers.back() == begin)
		std::cout << begin << std::endl;
	else
		std::cout << begin << "-" << numbers.back() << std::endl;
}

#else
int main(void)
{

	return 0;
}
#endif