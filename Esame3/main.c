#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fatture.h"

int main(int argc, char *argv[])
{
    FILE *pf;
    Record r;
    Lista l;
    Lista listaOrd;

    if (argc != 2)
    {
        printf("uso %s + [nome_file]\n", argv[0]);
        exit(1);
    }
    pf = fopen(argv[1], "rb");
    if (pf == NULL)
    {
        printf("errore apertura file\n");
        exit(2);
    }
    while (fread(&r, sizeof(Record), 1, pf) == 1)
    {
        inserimento(&l, r);
        inserimentoOrdinato(&listaOrd, r);
    }

    if (fclose(pf) != 0)
    {
        printf("errore chiusura file\n");
        exit(2);
    }

    stampa(l);
    pf = (fopen("ultimi3.txt", "wt"));
    if (pf == NULL)
    {
        printf("errore apertura file\n");
        exit(2);
    }

    int i;
    for (i = 0; i < 3; i++)
    {
        fprintf(pf, "%s\n", listaOrd->dato.targa);
        listaOrd = listaOrd->next;
    }
    if (fclose(pf) != 0)
    {
        printf("errore chiusura file\n");
        exit(2);
    }
    return 0;
}