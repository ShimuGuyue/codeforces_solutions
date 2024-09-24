#include <iostream>
#include <queue>

void Hexadecimal_s_Numbers();

int main(void)
{
	Hexadecimal_s_Numbers();
	return 0;
}

void Hexadecimal_s_Numbers()
{
	long long n;
	std::cin >> n;
	std::queue<long long> q;
	q.push(1);
	int ans(0);
	while (!q.empty())
	{
		++ans;
		if (q.front() * 10 <= n)
			q.push(q.front() * 10);
		if (q.front() * 10 + 1 <= n)
			q.push(q.front() * 10 + 1);
		q.pop();
	}
	std::cout << ans << std::endl;
}