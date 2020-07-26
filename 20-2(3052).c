#include <stdio.h>
int main()
{
	int a[42] = { -2, };
	int k,count;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &k);
		a[k % 42] = -1;
	}

	count = 0;

	for (int i = 0; i < 42; i++)
	{
		if (a[i] == -1)
			count += 1;
	}
	printf("!!%d\n", count);
}