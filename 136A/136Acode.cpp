#include <iostream>
#include <vector>

struct Friend
{
	int number;
	int to;
};

std::vector<int> Presents(std::vector<Friend> vFriend);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<Friend> p;
	for (int i(1); i <= n; ++i)
	{
		Friend tempFriend;
		std::cin >> tempFriend.to;
		tempFriend.number = i;
		p.push_back(tempFriend);
	}
	std::vector<int> ans(Presents(p));
	for (std::vector<int>::iterator it(ans.begin()); it != ans.end(); ++it)
	{
		std::cout << *it << ' ';
	}
	return 0;
}

std::vector<int> Presents(std::vector<Friend> vFriend)
{
	int len(vFriend.size());
	std::vector<int> ans(len);
	for (std::vector<Friend>::iterator it(vFriend.begin()); it != vFriend.end(); ++it)
	{
		ans[it->to - 1] = it->number;
	}
	return ans;
}