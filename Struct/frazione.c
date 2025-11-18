#include <stdio.h>

typedef struct
{
    int num;
    int den;
} Frazione;

// ----Creazione e accesso dati

int num(Frazione f) // getter
{
    return f.num;
}

int den(Frazione f) // getters
{
    return f.den;
}

Frazione frazione(int n, int d) // costruttore
{
    Frazione f;
    f.num = n;
    f.den = d;

    return f;
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
    printf("%d / %d\n", num(f), den(f));
}

void stampaDecimale(Frazione f)
{
    printf("%f\n", (float)num(f) / den(f));
}

// ---- Applicazione

int main()
{

    Frazione f1 = frazione(2, 3);
    Frazione f2 = inputFrazione();
    stampaFrazionaria(f2);
    stampaDecimale(f2);
}
