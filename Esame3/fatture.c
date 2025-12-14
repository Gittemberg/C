#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fatture.h"

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

    while (*pl != NULL && strcmp(r.targa, (*pl)->dato.targa))
    {
        pl = &(*pl)->next;
    }
    if (*pl != NULL && !strcmp(r.targa, (*pl)->dato.targa))
    {
        (*pl)->dato.contatore++;
    }
    else if (*pl == NULL)
    {
        Dato d;
        strcpy(d.targa, r.targa);
        d.contatore = 1;
        insTesta(pl, d);
    }
}

void inserimentoOrdinato(Lista *pl, Record r)
{

    Dato d;
    strcpy(d.targa, r.targa);
    insTesta(pl, d);
    pl = &(*pl)->next;
}
void stampa(Lista l)
{
    float mult;
    while (l != NULL)
    {
        mult = 1.0f;
        if (l->dato.contatore <= 5)
        {
            mult = 2.0f;
        }
        else if (l->dato.contatore >= 6 && l->dato.contatore <= 10)
        {
            mult = 1.9f;
        }
        else
        {
            mult = 1.80;
        }
        printf("%s %.2f\n", l->dato.targa, l->dato.contatore * mult);
        l = l->next;
    }
}
