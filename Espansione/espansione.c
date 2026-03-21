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

int confrontaMintermine(const char *a, const char *b, char *out)
{
    int diff = 0;
    int len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        if (a[i] == b[i])
        {
            out[i] = a[i];
        }
        else if (a[i] == '-' || b[i] == '-')
        {
            out[i] = '-';
        }
        else
        {
            diff++;
            out[i] = '-';
        }
    }

    out[len] = '\0';

    return (diff == 1); // 1 = combinabili
}
int esiste(ListaMinterm *l, const char *term)
{
    for (int i = 0; i < l->count; i++)
    {
        if (strcmp(l->minterms[i], term) == 0)
            return 1;
    }
    return 0;
}
void espandiMintermini(ListaMinterm *input, ListaMinterm *output)
{
    ListaMinterm corrente = *input;
    ListaMinterm nuovo;

    char buffer[MAX_TERMS];
    int cambiato;

    do
    {
        nuovo.count = 0;
        cambiato = 0;

        for (int i = 0; i < corrente.count; i++)
        {
            for (int j = i + 1; j < corrente.count; j++)
            {
                if (confrontaMintermine(corrente.minterms[i],
                                        corrente.minterms[j],
                                        buffer))
                {
                    if (!esiste(&nuovo, buffer))
                    {
                        strcpy(nuovo.minterms[nuovo.count++], buffer);
                    }
                    cambiato = 1;
                }
            }
        }

        // aggiungi quelli non combinati
        for (int i = 0; i < corrente.count; i++)
        {
            int combinato = 0;

            for (int j = 0; j < corrente.count; j++)
            {
                if (i != j &&
                    confrontaMintermine(corrente.minterms[i],
                                        corrente.minterms[j],
                                        buffer))
                {
                    combinato = 1;
                    break;
                }
            }

            if (!combinato && !esiste(&nuovo, corrente.minterms[i]))
            {
                strcpy(nuovo.minterms[nuovo.count++], corrente.minterms[i]);
            }
        }

        corrente = nuovo;

    } while (cambiato);

    *output = corrente;
}