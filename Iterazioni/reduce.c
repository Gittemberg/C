#include <stdio.h>

int main()
{
    int a, t = 1;

    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &a);
        t = t * a;
    }
    printf("%d\n", t);
}