#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
etichetta:
    int i = 2;
    for (; i <= a; i++)
    {
        if (a % i == 0)
        {

            printf("%d ", i);
            a = a / i;

            goto etichetta;
        }
    }
}