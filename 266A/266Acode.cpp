#include <iostream>
int main(void)
{
	int n;
	std::cin >> n;
	std::string rock;
	std::cin >> rock;
	int ans = 0;
	for (std::string::iterator it = rock.begin() + 1; it != rock.end(); ++it)
	{
		if (*it == *(it - 1))
			++ans;
	}
	std::cout << ans << std::endl;
	return 0;
}