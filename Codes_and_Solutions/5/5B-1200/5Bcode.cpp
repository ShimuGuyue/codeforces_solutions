#include <iostream>
#include <string>
#include <vector>

void Center_Alignment();

int main(void)
{
	Center_Alignment();
	return 0;
}

void Center_Alignment()
{
	std::vector<std::string> texts;
	std::string text;
	int maxLen(0);
	while (getline(std::cin, text))
	{
		maxLen = std::max(maxLen, static_cast<int>(text.length()));
		texts.push_back(text);
	}

	for (int i(0); i <= maxLen + 1; ++i)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
	int mode(1);// 1 -> left , 2 -> right
	for (std::string s : texts)
	{
		std::cout << "*";
		int dif(maxLen - s.size());
		if (dif % 2)
		{
			if (mode == 1)
			{
				for (int i(0); i < dif / 2; ++i)
				{
					std::cout << " ";
				}
				std::cout << s;
				for (int i(0); i < dif / 2 + 1; ++i)
				{
					std::cout << " ";
				}
				mode = 2;
			}
			else
			{
				for (int i(0); i < dif / 2 + 1; ++i)
				{
					std::cout << " ";
				}
				std::cout << s;
				for (int i(0); i < dif / 2; ++i)
				{
					std::cout << " ";
				}
				mode = 1;
			}
		}
		else
		{
			for (int i(0); i < dif / 2; ++i)
			{
				std::cout << " ";
			}
			std::cout << s;
			for (int i(0); i < dif / 2; ++i)
			{
				std::cout << " ";
			}
		}
		std::cout << "*" << std::endl;
	}
	for (int i(0); i <= maxLen + 1; ++i)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
}