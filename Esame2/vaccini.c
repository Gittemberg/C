#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vaccini.h"

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

void insTesta(Lista *pl, Dato d)
{

    Nodo *aux = malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void inserimento(Lista *pl, Record r)
{
    while (*pl != NULL && (*pl)->dato.chip != r.chip)

    {
        pl = &(*pl)->next;
    }
    if (*pl != NULL && (*pl)->dato.chip == r.chip)
    {
        switch (r.vaccino)
        {
        case 'E':
            (*pl)->dato.e = 1;

            break;
        case 'P':
            (*pl)->dato.p = 1;
            break;
        case 'C':
            (*pl)->dato.e = 1;
            break;
        }
    }
    else if (*pl == NULL)
    {
        Dato d;
        d.chip = r.chip;
        switch (r.vaccino)
        {
        case 'E':
            d.e = 1;
            d.c = 0;
            d.p = 0;
            break;
        case 'P':
            d.p = 1;
            d.c = 0;
            d.e = 0;
            break;
        case 'C':
            d.e = 0;
            d.c = 1;
            d.p = 0;
            break;
        }

        insTesta(pl, d);
    }
}
void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("chip: %d ", l->dato.chip);

        if (l->dato.e == 0)
            printf("epatite ");
        if (l->dato.p == 0)
            printf("parvovirosi ");

        if (l->dato.c == 0)
            printf("cimurro ");
        printf("\n");
        l = l->next;
    }
}
int confronto(int s1, int s2, int chip1, int chip2)
{
    int r = s1 - s2;
    if (r != 0)
        return r;
    else
        return chip2 - chip1;
}
Lista *ricerca(Lista *pl, Dato d)
{
    int sPl = 0;
    int s = d.e + d.p + d.c;

    while (*pl)
    {
        if (*pl != NULL)
            sPl = (*pl)->dato.c + (*pl)->dato.e + (*pl)->dato.p;
        if (confronto(s, sPl, d.chip, (*pl)->dato.chip) > 0)

            break;

        pl = &(*pl)->next;
    }
    return pl;
}
void inserimentoOrdinato(Lista *pl, Dato d)
{
    pl = ricerca(pl, d);
    insTesta(pl, d);
}