#include <iostream>
#include <queue>

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
	std::string email;
	std::cin >> email;

	std::string email_at;
	bool at(false);
	email_at += email.front();
	for (int i(1); i < email.size() - 1; ++i)
	{
		if (!at && email[i] == 'a' && email[i + 1] == 't')
		{
			email_at += "@";
			++i;
			at = true;
		}
		else
			email_at += email[i];
	}
	email_at += email.back();

	std::string ans;
	int dot(0);
	ans += email_at.front();
	for (int i(1); i < email_at.size() - 1; ++i)
	{
		if (dot == 0)
		{
			if (email_at[i] == 'd')
				dot = 1;
			else
				ans += email_at[i];
		}
		else if (dot == 1)
		{
			if (email_at[i] == 'o')
				dot = 2;
			else
			{
				dot = 0;
				ans += "d";
				--i;
			}
		}
		else if (dot == 2)
		{
			if (email_at[i] == 't')
				ans += ".";
			else
			{
				ans += "do";
				ans += email_at[i];
			}
			dot = 0;
		}
	}
	if (dot == 1)
		ans += "d";
	else if (dot == 2)
		ans += "do";
	ans += email_at.back();
	std::cout << ans << std:: endl;
}