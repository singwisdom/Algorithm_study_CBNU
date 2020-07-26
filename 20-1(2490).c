#include <stdio.h>
int main()
{
	int a[4] = { 0,0,0,0 };
	int zero,one;

	for (int i = 0; i < 3; i++)
	{
		zero = 0; one = 0;

		scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);

		for (int j = 0; j < 4; j++)
		{
			if (a[j] == 0)
				++zero;
			else if (a[j] == 1)
				++one;
		}
		if (zero == 1 && one == 3)
			printf("A\n");
		else if (zero == 2 && one == 2)
			printf("B\n");
		else if (zero == 3 && one == 1)
			printf("C\n");
		else if (zero == 4)
			printf("D\n");
		else if (one == 4)
			printf("E\n");
	
	}
}

