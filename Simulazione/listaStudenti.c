#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaStudenti.h"

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

    while (*pl != NULL && (*pl)->dato.matricola != r.matricola)
    {
        pl = &(*pl)->next;
    }

    if (*pl != NULL && (*pl)->dato.matricola == r.matricola)
    {

        (*pl)->dato.n_esami++;
        (*pl)->dato.somma_voto += r.voto;
    }

    else
    {

        Dato d;
        d.matricola = r.matricola;
        d.n_esami = 1;
        d.somma_voto = r.voto;

        insTesta(pl, d);
    }
}

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%d: %d %.02f\n", l->dato.matricola, l->dato.n_esami, (float)l->dato.somma_voto / l->dato.n_esami);
        l = l->next;
    }
}

float confronto(int n1, int n2, float m1, float m2)
{
    int r = n1 - n2;
    if (r != 0)
        return r;
    else
        return (m1 - m2);
}

Lista *ricerca(Lista *pl, Dato d)
{
    while (*pl)
    {
        if (confronto((*pl)->dato.n_esami, d.n_esami, (float)(*pl)->dato.somma_voto / (*pl)->dato.n_esami, (float)d.somma_voto / d.n_esami) < 0)
        {
            break;
        }
        pl = &(*pl)->next;
    }
    return pl;
}
void inserimentoOrdinato(Lista *pl, Dato d)
{

    pl = ricerca(pl, d);
    insTesta(pl, d);
}
