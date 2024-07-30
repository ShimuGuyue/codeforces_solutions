#include <iostream>

void String_Similarity();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		String_Similarity();
		//std::cout << std::endl;
	}
	return 0;
}

void String_Similarity()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	for (int i(0); i < 2 * n - 1; i += 2)
	{
		std::cout << s[i];
	}
	std::cout << std::endl;
}