#include <iostream>

void Train_and_Peter();

int main(void)
{
	Train_and_Peter();
	return 0;
}

void Train_and_Peter()
{
	std::string letters;
	std::string first;
	std::string second;
	std::cin >> letters;
	std::cin >> first;
	std::cin >> second;
#
	bool forward(false);
	bool backward(false);

	{
		std::string front(letters);
		int findFirst(front.find(first));
		if (findFirst != -1)
		{
			front.erase(front.begin(), front.begin() + findFirst + first.size());
			int findSecond(front.find(second));
			if (findSecond != -1)
				forward = true;
			else
				;
		}
		else
			;
	}
	{
		std::string behind(letters.rbegin(), letters.rend());
		int findFirst(behind.find(first));
		if (findFirst != -1)
		{
			behind.erase(behind.begin(), behind.begin() + findFirst + first.size());
			int findSecond(behind.find(second));
			if (findSecond != -1)
				backward = true;
			else
				;
		}
		else
			;
	}
#
	if (forward && backward)
		std::cout << "both" << std::endl;
	else if(forward && !backward)
		std::cout << "forward" << std::endl;
	else if (!forward && backward)
		std::cout << "backward" << std::endl;
	else // if (!forward && !backward)
		std::cout << "fantasy" << std::endl;
}