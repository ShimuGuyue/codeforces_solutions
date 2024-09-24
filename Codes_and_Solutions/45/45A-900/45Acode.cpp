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
	std::string year;
	std::cin >> year;
	int k;
	std::cin >> k;
	while (k--)
	{
		if (year == "January")
			year = "February";
		else if (year == "February")
			year = "March";
		else if (year == "March")
			year = "April";
		else if (year == "April")
			year = "May";
		else if (year == "May")
			year = "June";
		else if (year == "June")
			year = "July";
		else if (year == "July")
			year = "August";
		else if (year == "August")
			year = "September";
		else if (year == "September")
			year = "October";
		else if (year == "October")
			year = "November";
		else if (year == "November")
			year = "December";
		else if (year == "December")
			year = "January";
	}
	std::cout << year << std::endl;
}