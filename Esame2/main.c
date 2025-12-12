#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vaccini.h"

int main(int argc, char *argv[])
{
    Record r;
    Lista l;
    nuovaLista(&l);
    Lista lOrd;
    nuovaLista(&lOrd);
    FILE *pf;
    if (argc != 2)
    {
        printf("uso: %s + nome file", argv[0]);
        exit(1);
    }
    pf = fopen(argv[1], "rb");
    if (pf == NULL)
    {
        printf("errore apertura file");
        exit(2);
    }
    while (fread(&r, sizeof(Record), 1, pf) == 1)
    {
        inserimento(&l, r);
    }

    if (fclose(pf) != 0)
    {
        printf("errore chiusura file");
    }
    stampa(l);

    while (l != NULL)
    {
        inserimentoOrdinato(&lOrd, l->dato);
        l = l->next;
    }
    printf("\nlista ordinata \n");
    stampa(lOrd);

    pf = fopen("vaccinati.txt", "wt");
    if (pf == NULL)
    {
        printf("errore apertura file");
        exit(2);
    }

    while (lOrd != NULL)
    {
        fprintf(pf, "%d\n", lOrd->dato.chip);
        lOrd = lOrd->next;
    }
    if (fclose(pf) != 0)
    {
        printf("errore chiusura file");
    }
}