#include <stdio.h>

int main()
{
	int testcase;
	int num;
	
	scanf("%d", &testcase);

	for (int i = 0; i < testcase; i++)
	{
		int a[1000];
		int count = 0;
		int sum = 0;
		
		scanf("%d ", &num);

		for (int j = 0; j < num; j++)
		{
			scanf("%d", &a[j]);
			sum += a[j];
		}
		
		
		for (int j = 0; j < num; j++)
		{
			if ((double)sum / num < a[j])
				count++;
		}

		printf("%.3f%%\n", (double)count*100/num); 
		// count/num*100�� ����� 0���� ����
		// (double)(count*100/num)�� �Ҽ��� ��°�ڸ� ���� ����� �ȳ���
		
	}
}

