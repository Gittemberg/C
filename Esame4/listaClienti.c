#include <stdio.h>
#include <stdlib.h>
#include "listaClienti.h"
#include <string.h>

char *mesi[] = {"Gen", "Feb", "Mar", "Apr", "Mag", "Giu", "Lug", "Ago", "Set", "Ott", "Nov", "Dic"};

void nuovaLista(Lista *pl)
{

    *pl = NULL;
}
void azzero(Lista *pl)
{
    int i;
    for (i = 1; i < 12; i++)
    {
        (*pl)->dato.mensili[i] = 0;
    }
}

void insTesta(Lista *pl, Dato d)
{
    Nodo *aux = malloc(sizeof(Nodo));
    if (aux == NULL)
    {
        printf("Errore allocazione memoria\n");
        exit(100);
    }
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void inserimento(Lista *pl, Record r)
{

    while (*pl != NULL && strcmp((*pl)->dato.fiscale, r.fiscale))
    {
        pl = &(*pl)->next;
    }
    if (*pl != NULL && !strcmp((*pl)->dato.fiscale, r.fiscale))
    {
        (*pl)->dato.totale += r.importo;
        (*pl)->dato.mensili[r.mese - 1] += r.importo;
    }
    else
    {
        Dato d;
        strcpy(d.fiscale, r.fiscale);
        d.totale = r.importo;
        d.mensili[r.mese - 1] = r.importo;
        int i;
        for (i = 0; i < 12; i++)
        {
            if (i != r.mese - 1)
                d.mensili[i] = 0.0;
        }

        insTesta(pl, d);
    }
}

Lista *ricerca(Lista *pl, Dato d)
{
    while (*pl)
    {
        if (strcmp((*pl)->dato.fiscale, d.fiscale) > 0)
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

void ordina(Lista pl, Lista *l2)
{
    while (pl != NULL)
    {
        inserimentoOrdinato(l2, pl->dato);
        pl = pl->next;
    }
}
void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%s: %.02f", l->dato.fiscale, l->dato.totale);
        int i;
        for (i = 0; i < 12; i++)
        {
            if (l->dato.mensili[i] != 0)
            {
                printf(" %s: %.02f", mesi[i], l->dato.mensili[i]);
            }
        }
        printf("\n");
        l = l->next;
    }
}