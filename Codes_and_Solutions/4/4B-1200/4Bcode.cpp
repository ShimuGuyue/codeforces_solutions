#include <iostream>
#include <vector>

void Before_an_Exam();

int main(void)
{
	Before_an_Exam();
	return 0;
}

void Before_an_Exam()
{
	int d, sum;
	std::cin >> d >> sum;
	std::vector<int> min(d);
	std::vector<int> max(d);
	int sumMin(0);
	int sumMax(0);
	for (int i(0); i < d; ++i)
	{
		std::cin >> min[i] >> max[i];
		sumMin += min[i];
		sumMax += max[i];
	}

	if (sumMin > sum || sumMax < sum)
	{
		std::cout << "NO" << std::endl;
		return;
	}

	int dif(sumMax - sum);
	for (int i(0); i < d; ++i)
	{
		if (max[i] - min[i] <= dif)
		{
			dif -= max[i] - min[i];
			max[i] = min[i];
		}
		else
		{
			max[i] -= dif;
			break;
		}
	}

	std::cout << "YES" << std::endl;
	for (int i : max)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}