#include <iostream>

int pow2[30]{
	1, 2, 4, 8,
	16, 32, 64,
	128, 256, 512,
	1024, 2048, 4096, 8192,
	16384, 32768, 65536,
	131072, 262144, 524288,
	1048576, 2097152, 4194304, 8388608,
	16777216, 33554432, 67108864,
	134217728, 268435456, 536870912
};

bool judgePow2(int n);
int Raising_Bacteria(int n);

int main(void)
{
	int x;
	std::cin >> x;
	std::cout << Raising_Bacteria(x) << std::endl;
	return 0;
}

int Raising_Bacteria(int n)
{
	int sum(1);
	while (n)
	{
		if (judgePow2(n))
			return sum;
		if (n % 2 == 0)
			n /= 2;
		else
		{
			n -= 1;
			++sum;
		}
	}
	return sum;
}

bool judgePow2(int n)
{
	for (int i = 0; i < 30; ++i)
	{
		if (n == pow2[i])
			return true;
	}
	return false;
}