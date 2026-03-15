#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "espansione.h"

// Inizializza la lista
void nuovaLista(ListaMinterm *l)
{
    l->count = 0;
}

// Inserisce un mintermine nell'array se non supera MAX_TERMS
int inserisciMintermine(ListaMinterm *l, const char *minterm)
{
    if (l->count >= MAX_TERMS)
    {
        printf("Limite massimo di mintermini raggiunto!\n");
        return 0;
    }
    strcpy(l->minterms[l->count], minterm);
    l->count++;
    return 1;
}