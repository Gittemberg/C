#include <stdio.h>
int main()
{
    int a, m, c;
    printf("inserisci l'anno\n");
    scanf("%d%d", &a, &m);
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        printf("è bisestile\n");
        c = 1;
    }
    else

    {
        printf("non è bisestile\n");
        c = 0;
    }

    if (m == 2)
        if (c == 1)
            printf("29 giorni\n");
        else
            printf("28 giorni\n");
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        printf("30 giorni\n");
    }
    else
        printf("31 giorni\n");
}