#include <stdio.h>

int main()
{
	int n, a[8] = { 0, },result;
	int hp, mp, attack;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < 8; j++)
		{
			scanf("%d", &a[j]);
		}
		
		hp = a[0] + a[4]; 
		mp = a[1] + a[5];
		attack = a[2] + a[6];
		
		if (hp < 1)
			hp = 1;
		if (mp < 1)
			mp = 1;
		if (attack< 0)
			attack = 0;

		result = 1 * (hp) + 5 * (mp) + 2 * (attack) + 2 * (a[3] + a[7]);

		printf("%d\n", result);
	}
}