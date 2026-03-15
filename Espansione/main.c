#include <stdio.h>
#include <stdlib.h>
#include "espansione.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s [nome_file]\n", argv[0]);
        return 1;
    }

    FILE *pf = fopen(argv[1], "rt");
    if (!pf)
    {
        printf("Errore apertura file!\n");
        return 2;
    }

    ListaMinterm lista;
    nuovaLista(&lista);

    char bitStr[MAX_BITS + 2]; // 4 bit + spazio + '\0'
    int flag;

    // Legge il file riga per riga
    while (fscanf(pf, "%s %d", bitStr, &flag) == 2)
    {
        if (flag == 1)
        {
            inserisciMintermine(&lista, bitStr);
        }
    }

    fclose(pf);

    // Stampa quello che è stato letto
    printf("Mintermini letti dal file:\n");
    for (int i = 0; i < lista.count; i++)
    {
        printf("%s\n", lista.minterms[i]);
    }

    return 0;
}