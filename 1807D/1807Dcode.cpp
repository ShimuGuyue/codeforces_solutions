#include <iostream>
#include <vector>

void Odd_Queries();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Odd_Queries();
		//std::cout << std::endl;
	}
	return 0;
}

void Odd_Queries()
{
	int n, q;
	std::cin >> n >> q;
	std::vector<int> a(n);
	std::vector<int> prefix(n);
	int sum(0);
	for (int i(0); i < n; ++i)
	{
		std::cin >> a[i];
		sum += a[i];
		prefix[i] = sum;
	}
	while (q--)
	{
		int l, r, k;
		std::cin >> l >> r >> k;
		long long ans((l - r + 1) * k);
		if (l != 1)
			ans += prefix[l - 2];
		if (r != n)
			ans += sum - prefix[r - 1];
		if (ans % 2)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
}