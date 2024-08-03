#include <iostream>

int Division_(int n);

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int rating;
		std::cin >> rating;
		std::cout << "Division " << Division_(rating) << std::endl;
	}
	return 0;
}

int Division_(int n)
{
	if (n >= 1900)
		return 1;
	else if (n >= 1600)
		return 2;
	else if (n >= 1400)
		return 3;
	else
		return 4;
}