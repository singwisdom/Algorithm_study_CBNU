#include <stdio.h>

int main()
{
	int sum[5];
	int k=0,winner,winnernum;
	int a, b, c, d;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		sum[k] = a + b + c + d;
		++k;

	}

	winner = sum[0];
	winnernum = 0;

	for (k = 0; k < 5; k++)
	{
		if (winner <= sum[k + 1])
		{
			winner = sum[k + 1];
			winnernum = k + 1;
		}
		
	}

	printf("%d %d\n",winnernum+1,winner);

	return 0;
}