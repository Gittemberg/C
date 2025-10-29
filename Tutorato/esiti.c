#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 18 && a <= 20)
    {
        printf("sufficiente\n");
    }
    else if (a >= 21 && a <= 23)
    {
        printf("discreto\n");
    }
    else if (a >= 24 && a <= 26)
    {
        printf("buono\n");
    }
    else if (a >= 27 && a <= 29)
    {
        printf("distinto\n");
    }
    else if (a >= 30 && a <= 32)
    {
        printf("ottimo\n");
    }
}
