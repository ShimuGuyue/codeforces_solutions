#include <iostream>

void Omkar_and_Last_Class_of_Math();

int main(void)
{
	int t;
	std::cin >> t;
	while (t--)
	{
		Omkar_and_Last_Class_of_Math();
		//std::cout << std::endl;
	}
	return 0;
}

void Omkar_and_Last_Class_of_Math()
{
	int n;
	std::cin >> n;
	int a(1), b(n - 1);
	for (int i(2); i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			a = n / i;
			b = n - a;
			break;
		}
	}
	std::cout << a << " " << b << std::endl;
}