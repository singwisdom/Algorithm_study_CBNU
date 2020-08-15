#include <stdio.h>

int main()
{
	int a[10] = { 0, }, b[10] = { 0, };
	int A=0, B=0,D=0;

	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < 10; i++)
		scanf("%d", &b[i]);

	for (int j = 0; j < 10; j++)
	{
		if (a[j] > b[j])
			A += 1;
		else if (a[j] == b[j])
			D += 1;
		else
			B += 1;
	}

	if (A > B)
		printf("A");
	else if (A == B)
		printf("D");
	else
		printf("B");
}