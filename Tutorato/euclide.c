#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, q, r;
    scanf("%d%d", &a, &b);
    while (b != 0)

    {
        q = a / b;
        r = a % b;
        a = b;
        b = r;
    }
    printf("MCD è: %d\n", a);
}