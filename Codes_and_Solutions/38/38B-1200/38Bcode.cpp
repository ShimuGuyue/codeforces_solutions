#include <iostream>

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
	std::string rook;
	std::string knight;
	std::cin >> rook;
	std::cin >> knight;
	int ans(64);
	for (char i('a'); i <= 'h'; ++i)
	{
		for (char j('1'); j <= '8'; ++j)
		{
			if (i == rook.front() || j == rook.back())
				--ans;
			else if (i == knight.front() && j == knight.back())
				--ans;
			else
			{
				if (i - 1 == rook.front() && j - 2 == rook.back())
					--ans;
				else if (i - 1 == rook.front() && j + 2 == rook.back())
					--ans;
				else if (i - 2 == rook.front() && j - 1 == rook.back())
					--ans;
				else if (i - 2 == rook.front() && j + 1 == rook.back())
					--ans;
				else if (i + 1 == rook.front() && j - 2 == rook.back())
					--ans;
				else if (i + 1 == rook.front() && j + 2 == rook.back())
					--ans;
				else if (i + 2 == rook.front() && j - 1 == rook.back())
					--ans;
				else if (i + 2 == rook.front() && j + 1 == rook.back())
					--ans;

				else if (i - 1 == knight.front() && j - 2 == knight.back())
					--ans;
				else if (i - 1 == knight.front() && j + 2 == knight.back())
					--ans;
				else if (i - 2 == knight.front() && j - 1 == knight.back())
					--ans;
				else if (i - 2 == knight.front() && j + 1 == knight.back())
					--ans;
				else if (i + 1 == knight.front() && j - 2 == knight.back())
					--ans;
				else if (i + 1 == knight.front() && j + 2 == knight.back())
					--ans;
				else if (i + 2 == knight.front() && j - 1 == knight.back())
					--ans;
				else if (i + 2 == knight.front() && j + 1 == knight.back())
					--ans;
			}
		}
	}
	std::cout << ans << std::endl;
}