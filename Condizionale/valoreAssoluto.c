#include <stdio.h>

int main()
{
    int a;
    printf("inserisci un numero\n");
    scanf("%d", &a);
    if (a >= 0)
        printf("%d\n", a);
    else
        printf("%d\n", -a);
}