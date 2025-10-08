#include <stdio.h>

int main()
{
    int a, b, c;
    printf("inserisci tre numeri\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b)
    {
        if (a >= c)
            printf("%d\n", a);
    }
    else if (c >= b)
        printf("%d\n", c);
    else
        printf("%d\n", b);
}