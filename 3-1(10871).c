#include <stdio.h>

int main()
{
	int n, x;
	int number;

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
	{
		scanf("%d ", &number);

		if (number < x)
			printf("%d ", number);
	}
}