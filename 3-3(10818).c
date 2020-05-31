#include <stdio.h>

int main()
{
	int n;
	int min, max;
	int number;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &number);

		if (i == 0)
		{
			max = number;
			min = number;
		}

		if (number <= min)
			min = number;

		if (number >= max)
			max = number;

	}
}