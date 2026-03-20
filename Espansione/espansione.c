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
    char *s = malloc(length + 1);
    strcpy(s, minterm1);
    for (i = 0; i < length; i++)
    {
        if (!(minterm1[i] == minterm2[i]))
        {
            if (!(minterm2[i] == '-' || minterm1[i] == '-'))
            {
                counter++;
                j = i;
            }
            else if (minterm2[i] == '-')
            {

                s[i] = '-';
            }
        }
        if (counter >= 2)
        {
            strcpy(s, "no");
            return s;
        }
    }
    if (counter == 1)
    {

        s[j] = '-';
        return s;
    }
    else
    {
        strcpy(s, "no");
        return s;
    }
}

void confrontaArray(ListaMinterm *arrayOriginale, ListaMinterm *arrayNuovo)
{

    int i, j, k, flag, c;
    char *confronto = confrontaMintermine(arrayOriginale->minterms[0], arrayOriginale->minterms[1]);
    if (arrayOriginale->count == 1)
    {
        strcpy(arrayNuovo->minterms[0], arrayOriginale->minterms[0]);
        arrayNuovo->count++;
        return;
    }
    if (strcmp("no", confronto))
    {
        strcpy(arrayNuovo->minterms[0], confronto);
        arrayNuovo->count = 1;
        c = 1;
    }
    else
    {
        strcpy(arrayNuovo->minterms[0], arrayOriginale->minterms[0]);
        strcpy(arrayNuovo->minterms[1], arrayOriginale->minterms[1]);
        arrayNuovo->count = 2;
        c = 2;
    }
    free(confronto);
    char *confrontoCiclo;
    char *confrontoCiclo2;

    k = 0;
    flag = 0;
    for (i = 0; i < arrayOriginale->count - c; i++)
    {
        for (j = 0; j < arrayNuovo->count; j++)

        {
            confrontoCiclo = confrontaMintermine(arrayNuovo->minterms[j], arrayOriginale->minterms[i + c]);
            if (strcmp("no", confrontoCiclo))
            {
                for (k = 0; k < arrayNuovo->count; k++)
                {

                    confrontoCiclo2 = confrontaMintermine(arrayNuovo->minterms[j], arrayNuovo->minterms[k]);
                    if (!strcmp("no", confrontoCiclo))
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {

                    strcpy(arrayNuovo->minterms[j], confrontoCiclo);
                    free(confrontoCiclo);
                }

                else
                {

                    flag = 0;
                    confrontoCiclo = confrontaMintermine(arrayNuovo->minterms[k], arrayOriginale->minterms[i + c]);

                    for (k = 0; k < arrayNuovo->count; k++)
                    {

                        if (!strcmp(arrayOriginale->minterms[i + c], arrayNuovo->minterms[k]))
                        {
                            flag = 1;
                        }
                        if (strcmp("no", confrontoCiclo))
                        {
                            flag = 1;
                        }
                    }
                    free(confrontoCiclo);

                    if (flag == 0)
                    {
                        strcpy(arrayNuovo->minterms[arrayNuovo->count], arrayOriginale->minterms[i + c]);
                        arrayNuovo->count++;
                    }
                }
            }
        }
    }
}