#include <iostream>
#include <string>

void Sum_of_Round_Numbers(int n);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		Sum_of_Round_Numbers(n);
	}
	return 0;
}

void Sum_of_Round_Numbers(int n)
{
	std::string tostrN(std::to_string(n));
	int count0(0);
	for (std::string::iterator it(tostrN.begin()); it != tostrN.end(); ++it)
	{
		if (*it == '0')
			++count0;
	}
	int k = tostrN.length() - count0;
	std::cout << k << std::endl;
	while (k--)
	{
		bool judge0(true);
		std::string summands;
		for (std::string::iterator it(tostrN.begin()); it != tostrN.end(); ++it)
		{
			if (judge0)
			{
				if (*it != '0')
				{
					summands += *it;
					*it = '0';
					judge0 = false;
				}
			}
			else
			{
				summands += '0';
			}
		}
		std::cout << summands << " ";
	}
	std::cout << std::endl;
}