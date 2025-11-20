
// interfaccia ADT Frazione

typedef struct
{
    int num;
    int den;
} Frazione;

Frazione frazione(int n, int d);
Frazione inputFrazione(void);
void stampaFrazionaria(Frazione f);
void stampaDecimale(Frazione f);
Frazione somma(Frazione f1, Frazione f2);
Frazione differenza(Frazione f1, Frazione f2);
Frazione prodotto(Frazione f1, Frazione f2);
Frazione divisione(Frazione f1, Frazione f2);
