#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a >= 1 && a <= 8) && (b >= 1 && b <= 8))
    {
        if ((b % 2 == 0 && a % 2 != 0) || (a % 2 == 0 && b % 2 != 0))
            printf("casella scura\n");
        else
            printf("casella bianca\n");
    }
    else
        printf("non valida\n");
}