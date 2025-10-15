#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a >= b ? a : b); // stampa il più grande
}