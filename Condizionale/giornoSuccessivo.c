#include <stdio.h>
int main()
{
    int a, m, g, giorni_mese;
    printf("inserisci giorno mese e anno\n");
etichetta:
    scanf("%d%d%d", &g, &m, &a);
    if (m > 12 || m < 1)
    {
        printf("errore mese, reinserire anno e mese\n");

        goto etichetta;
    }
    if (m == 2)
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
            giorni_mese = 29;

        else

            giorni_mese = 28;

    else if (m == 4 || m == 6 || m == 9 || m == 11)
        giorni_mese = 30;
    else
        giorni_mese = 31;

    if (g > giorni_mese || g < 1)
    {
        printf("errore giorno, reinserire data\n");
        goto etichetta;
    }
    if (g + 1 < giorni_mese)
        g++;
    else
    {
        g = 1;
        m++;
        if (m > 12)
        {
            a = a + 1;
            m = 1;
        }
    }
    printf("%d/%d/%d\n", g, m, a);
}
