#include <iostream>

void Last_Year_s_Substring();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Last_Year_s_Substring();
		//std::cout << std::endl;
	}
	return 0;
}

void Last_Year_s_Substring()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
		std::cout << "YES" << std::endl;
	else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
		std::cout << "YES" << std::endl;
	else if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
		std::cout << "YES" << std::endl;
	else if (s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
		std::cout << "YES" << std::endl;
	else if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}