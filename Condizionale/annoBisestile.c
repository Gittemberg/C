#include <stdio.h>
int main()
{
    int a, m, c;
    printf("inserisci l'anno\n");
    scanf("%d%d", &a, &m);

    if (m == 2)
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        {
            printf("è bisestile\n");
            printf("29 giorni");
        }
        else

        {
            printf("non è bisestile\n");
            printf("28 giorni");
        }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        printf("30 giorni\n");
    }
    else
        printf("31 giorni\n");
}