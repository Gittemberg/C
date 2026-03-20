#include <stdio.h>
#include <string.h>
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
    ListaMinterm lista2;
    nuovaLista(&lista2);

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
    if (lista.count == 0)
    {
        printf("Nessun mintermine con valore 1 nella tabella di verita'\n");
        return 0;
    }
    // Stampa quello che è stato letto
    printf("Mintermini letti dal file:\n");
    for (int i = 0; i < lista.count; i++)
    {
        printf("%s\n", lista.minterms[i]);
    }
    /*    char *test1 = "----";
       char *test2 = "1110";
       char *risultato = malloc(50);

       strcpy(risultato, confrontaMintermine(test1, test2));
       printf("Risultato test:\n");
         printf("%s\n", risultato);
    */

    confrontaArray(&lista, &lista2);
    printf("stampa lista 2\n");
    for (int i = 0; i < lista2.count; i++)
    {
        printf("%s\n", lista2.minterms[i]);
    }
    return 0;
}