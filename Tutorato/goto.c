#include <stdio.h>
#include <math.h>

int main()
{
    int a;
etichetta:
    scanf("%d", &a);

    if (a > 0)
        printf("%d", a * 2);
    else
        goto etichetta;
}