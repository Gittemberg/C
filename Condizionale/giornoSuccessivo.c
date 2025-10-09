#include <stdio.h>
int main()
{
    int a, m, g;
    printf("inserisci giorno mese e anno\n");
etichetta:
    scanf("%d%d%d", &g, &m, &a);
    g = g + 1;
    if (m > 12 || m < 1)
    {
        printf("errore mese, reinserire anno e mese\n");

        goto etichetta;
    }
    if (m == 2)
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        {
            if (g > 29)
            {
                g = 1;
                m = m + 1;
                if (m > 12)
                    a = a + 1;
                m = 1;
            }
            printf("%d, %d %d", g, m, a);
        }
        else
        {
            if (g > 28)
            {
                g = 1;
                m = m + 1;
                if (m > 12)
                    m = 1;
                a = a + 1;
            }
            printf("%d, %d %d", g, m, a);
        }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {

        if (g > 30)
        {
            g = 1;
            m = m + 1;
            if (m > 12)
            {
                m = 1;
                a = a + 1;
            }
        }
        printf("%d, %d %d", g, m, a);
    }
    else
    {

        if (g > 31)
        {
            g = 1;
            m = m + 1;
            if (m > 12)
            {
                m = 1;
                a = a + 1;
            }
        }
        printf("%d, %d %d", g, m, a);
    }
}