#include <stdio.h>

int main()
{
	int sungjuk;

	scanf("%d", &sungjuk);

	if (sungjuk >= 90 && sungjuk <= 100)
		printf("A");
	else if (sungjuk >= 80 && sungjuk <= 89)
		printf("B");
	else if (sungjuk >= 70 && sungjuk <= 79)
		printf("C");
	else if (sungjuk >= 60 && sungjuk <= 69)
		printf("D");
	else
		printf("F");

	return 0;
}