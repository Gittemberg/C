#include <stdio.h>
#include "frazione.h"

// ---- Applicazione

int main()
{

    Frazione f1 = frazione(2, 3);
    Frazione f2 = frazione(4, 6);
    Frazione f3 = inputFrazione();
    stampaFrazionaria(f2);
    stampaDecimale(f2);
    stampaFrazionaria(somma(f1, f2));
    stampaFrazionaria(differenza(f1, f2));
    stampaFrazionaria(prodotto(f1, f2));
    stampaFrazionaria(divisione(f1, f2));
}
