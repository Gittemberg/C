#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("inserisci i 4 numeri\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a * d == b * c)
        printf("sono frazioni uguali!\n");
    else
        printf("sono frazioni diverse!!!\n");
}