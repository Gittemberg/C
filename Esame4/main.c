#include <stdio.h>
#include <stdlib.h>
#include "listaClienti.h"
#include <string.h>

int main(int argc, char *argv[])
{
    Record r;
    FILE *pf;
    Lista l;
    Lista lOrd;

    nuovaLista(&l);
    nuovaLista(&lOrd);

    if (argc != 2)
    {
        printf("uso %s [nome_file]\n", argv[0]);
        exit(1);
    }
    pf = fopen(argv[1], "rt");

    if (pf == NULL)
    {
        printf("Errore apertura file\n");
        exit(2);
    }
    while (fscanf(pf, "%s %d %d %d %f", r.fiscale, &r.giorno, &r.mese, &r.anno, &r.importo) == 5)
    {
        inserimento(&l, r);
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(3);
    }

    ordina(l, &lOrd);
    stampa(lOrd);
    return 0;
}
