#include <stdio.h>

int main()

{
    int a, b, c;
    printf("inserisci i tre lati\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && a == c)
        printf("equilatero\n");
    else if (a == b || a == c || c == b)
        printf("isoscele\n");
    else
        printf("scaleno\n");
}