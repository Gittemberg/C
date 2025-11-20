#include "frazione.h"
#include <stdio.h>
#include <stdlib.h>

// ----Creazione e accesso dati

int num(Frazione f) // getter
{
    return f.num;
}

int den(Frazione f) // getters
{
    return f.den;
}
int mcd(int a, int b)
{
    if (a == 0 || b == 0)
        return 1;

    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;

    return a;
}

int va(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

Frazione inverso(Frazione f)
{
    return frazione(den(f), num(f));
}

Frazione frazione(int n, int d) // costruttore  //
{
    Frazione f;
    int divisore;
    if (d == 0)
    {
        printf("divisione per 0\n");
        exit(1);
    }

    if (d < 0)
    {
        n = -n;
        d = -d;
    }
    divisore = mcd(va(n), va(d));
    f.num = n / divisore;
    f.den = d / divisore;

    return f;
}
Frazione opposto(Frazione f)
{
    return frazione(-num(f), den(f));
}

Frazione inputFrazione(void)
{
    int n, d;
    printf("inserisci la frazione\n");
    scanf("%d%d", &n, &d);
    Frazione f = frazione(n, d);
    return f;
}

// ----- Operazioni

void stampaFrazionaria(Frazione f)
{

    Frazione f2 = frazione(num(f), den(f));
    printf("%d / %d\n", num(f2), den(f2));
}

void stampaDecimale(Frazione f)
{
    printf("%f\n", (float)num(f) / den(f));
}

Frazione somma(Frazione f1, Frazione f2)
{

    return frazione(num(f1) * den(f2) + den(f1) * num(f2), den(f1) * den(f2));
}
Frazione differenza(Frazione f1, Frazione f2)
{

    return somma(f1, opposto(f2));
}

Frazione prodotto(Frazione f1, Frazione f2)
{
    return frazione(num(f1) * num(f2), den(f1) * den(f2));
}
Frazione divisione(Frazione f1, Frazione f2)
{
    return prodotto(f1, inverso(f2));
}
