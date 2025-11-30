#include "listaVeicoli.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void scriviUltimi(Sosta soste[], int dl)
{
    FILE *pf;

    if ((pf = fopen("ultimi3.txt", "w")) == NULL)
    {
        printf("errore apertura file\n");
        exit(1);
    }
    int i;
    for (i = 1; i < 4; i++)
    {
        fprintf(pf, "%s %f\n", soste[dl - i].targa, soste[dl - i].durata);
    }

    if (fclose(pf) != 0)
    {
        printf("errore chiusura file\n");
        exit(2);
    }
}

void stampaFattura(Accessi accessi[], int dl)
{
    int i;
    for (i = 0; i < dl; i++)
    {
        printf("targa: %s, importo: %f\n", accessi[i].targa, accessi[i].contatore <= 5 ? 2 * accessi[i].contatore : accessi[i].contatore > 5 || accessi[i].contatore <= 10 ? accessi[i].contatore * 1.90
                                                                                                                : accessi[i].contatore > 10                                ? accessi[i].contatore * 1.80
                                                                                                                                                                           : accessi[i].contatore * 1.80);
    }
}

void creaAccessi(Sosta soste[])
{
    int i = 0;
    Accessi accessi[30];
    strcpy(accessi[0].targa, soste[0].targa);
    int c = 0;
    int dl = 1;
    int j;
    for (i = 0; i < 30; i++)
    {

        accessi[i].contatore = 0;

        for (j = 0; j < dl; j++)
        {
            if (strcmp(accessi[j].targa, soste[i].targa) == 0)
            {
                accessi[j].contatore++;

                break;
            }
        }
        if (j == dl)
        {

            strcpy(accessi[dl].targa, soste[i].targa);
            dl++;
            accessi[j].contatore++;
        }
    }

    stampaFattura(accessi, dl);
}

void caricaLista()
{
    FILE *pf;

    Sosta soste2;
    Sosta soste[30];

    char nome[30];
    int i = 0;
    printf("inserisci nome file\n");
    scanf("%s", nome);
    if ((pf = fopen(nome, "rb")) == NULL)
    {
        printf("errore apertura file\n");
        exit(1);
    }
    while (fread(&soste2, sizeof(Sosta), 1, pf) == 1)

    {

        strcpy(soste[i].targa, soste2.targa);
        soste[i].durata = soste2.durata;
        i++;
    }
    if (fclose(pf) != 0)
    {
        printf("errore chiusura file\n");
        exit(2);
    }

    creaAccessi(soste);
    scriviUltimi(soste, 30);
}