#include <iostream>

void Super_Agent();

int main(void)
{
	Super_Agent();
	return 0;
}

void Super_Agent()
{
	const int n(3);
	std::string password[3];
	for (std::string& s : password)
	{
		std::cin >> s;
	}
	if (password[0][0] != password[2][2])
		std::cout << "NO" << std::endl;
	else if (password[0][1] != password[2][1])
		std::cout << "NO" << std::endl;
	else if (password[0][2] != password[2][0])
		std::cout << "NO" << std::endl;
	else if (password[1][0] != password[1][2])
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
}