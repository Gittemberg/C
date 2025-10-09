#include <stdio.h>
int main()
{
    int a;
    printf("inserisci l'anno\n");
    scanf("%d", &a);
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        printf("è bisestile\n");
    else
        printf("non è bisestile\n");
}