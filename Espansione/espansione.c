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

char *confrontaMintermine(char *minterm1, char *minterm2)
{
    int length, i, counter, j;
    counter = 0;
    j = 0;

    length = strlen(minterm1);
    char *s = malloc(50);
    for (i = 0; i < length; i++)
    {
        if (!(minterm1[i] == minterm2[i]))
        {
            counter++;
            j = i;
        }
        if (counter >= 2)
        {
            strcpy(s, "non espandibili");
            return s;
        }
    }
    if (counter == 1)
    {

        strcpy(s, minterm1);
        s[j] = '-';
        return s;
    }
    else
    {
        strcpy(s, "non espandibili");
        return s;
    }
}
