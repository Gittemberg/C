#include <stdio.h>

int bisestile(int a)
{
    return a % 4 == 0 && (a % 100 != 0) || a % 400 == 0;
}

int giorni_mese(int m, int a)
{
    if (m == 2)
        if (bisestile(a))
            return 29;

        else

            return 28;

    else if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    else
        return 31;
}
int valida(int g, int m, int a)
{
    if (g > giorni_mese(g, a) || g < 1 || m > 12 || m < 1 || a < 0)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    int a, m, g, gm;
    printf("inserisci giorno mese e anno\n");

    scanf("%d%d%d", &g, &m, &a);
    if (!valida(g, m, a))
    {
        printf("data non valida\n");
        return -1;
    }

    if (g + 1 < giorni_mese(m, a))
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
