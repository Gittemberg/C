#include <stdio.h>

int mcd(int a, int b)
{
    while (a != b)
    {
        if (a < b)
            b = b - a;
        else
            a = a - b;
    }
    return a;
}

int main()
{

    // printf("%d", mcd(20, 8));
    int a, i, j;
    float k;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            k = 1.0 / (mcd(j, i));
            printf("%.03f ", k);
        }
        printf("\n");
    }
}