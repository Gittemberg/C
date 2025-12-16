#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "medie.h"
int main(int argc, char *argv[])
{

    FILE *pf;
    Record r;
    Lista l;
    Lista lOrd;

    nuovaLista(&l);
    nuovaLista(&lOrd);

    if (argc != 2)
    {
        printf("uso %s [nome_file]\n", argv[0]);
        exit(1);
    }

    pf = fopen(argv[1], "rb");

    if (pf == NULL)
    {
        printf("Errore lettura file\n");
        exit(2);
    }
    while (fread(&r, sizeof(Record), 1, pf) == 1)
        inserimento(&l, r);
    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(3);
    }

    while (l != NULL)
    {
        inserimentoOrdinato(&lOrd, l->dato);
        l = l->next;
    }
    printf("\ninserimento ordinato\n");
    stampa(lOrd);

    return 0;
}