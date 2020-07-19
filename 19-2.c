#include <stdio.h>
int main()
{
    int k[4] = { 0 };
    int a, b, result; // 내린사람, 탄 사람,결과

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &a, &b);
        if (i == 0)
            k[i] = k[i] + b - a;
        else
            k[i] = k[i - 1] + b - a;
    }
    result = k[0];

    for (int i = 1; i < 3; i++)
    {
        if (k[i] > result)
            result = k[i];
    }

    printf("%d", result);
}