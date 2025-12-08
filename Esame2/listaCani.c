#include <stdio.h>
#include <stdlib.h>
#include "listaCani.h"
#define DIM = 100

void scriviUltimi(VaccinazioneCheck check[], int dl)
{
    FILE *pf;

    if ((pf = fopen("vaccinati.txt", "w")) == NULL)
    {
        printf("errore apertura file\n");
        exit(1);
    }
    int i, m, j, index;
    VaccinazioneCheck checkOrdine[dl];
    index = 0;
    m = check[0].vaccinoC + check[0].vaccinoE + check[0].vaccinoP;
    for (j = 0; j < dl; j++)
    {
        for (i = 1; i < dl; i++)
        {
            if ((check[i].vaccinoC + check[i].vaccinoE + check[i].vaccinoP) >= m)
            {

                index = i;
                m = check[i].vaccinoC + check[i].vaccinoE + check[i].vaccinoP;
            }
            if (i == (dl - 1))
            {
                checkOrdine[j].chip = check[index].chip;
            }
        }
    }

    for (i = 0; i < dl; i++)
    {
        fprintf(pf, "%d\n", checkOrdine[i].chip);
    }
    if (fclose(pf) != 0)
    {
        printf("errore chiusura file\n");
        exit(2);
    }
}
void leggiFile(char nome[])
{
    FILE *pf;
    int n_elementi;
    Vaccinazione *vaccinazioni;
    if ((pf = fopen(nome, "rb")) == NULL)
    {
        printf("errore lettura\n");
        exit(1);
    }

    fseek(pf, 0, SEEK_END);
    n_elementi = ftell(pf) / sizeof(Vaccinazione);
    rewind(pf);

    vaccinazioni = (Vaccinazione *)malloc(n_elementi * sizeof(Vaccinazione));
    fread(vaccinazioni, sizeof(Vaccinazione), n_elementi, pf);
    for (int i = 0; i < n_elementi; i++)
    {
        printf("%d, %c \n", vaccinazioni[i].chip, vaccinazioni[i].vaccino);
    }
    if (fclose(pf) != 0)
    {
        printf("errore chiusura\n");
        exit(2);
    }
    checkVaccinazioni(vaccinazioni, n_elementi);
}

void checkVaccinazioni(Vaccinazione vaccinazioni[], int dim)
{

    int dl, i, j;
    VaccinazioneCheck check[dim];
    check[0].chip = vaccinazioni[0].chip;
    check[0].vaccinoC = 0;
    check[0].vaccinoP = 0;

    check[0].vaccinoE = 0;

    dl = 1;
    for (i = 0; i < dim; i++)
    {

        for (j = 0; j < dl; j++)
        {

            if (vaccinazioni[i].chip == check[j].chip)
            {

                if (vaccinazioni[i].vaccino == 'P')
                {
                    check[j].vaccinoP = 1;
                }
                if (vaccinazioni[i].vaccino == 'C')
                {
                    check[j].vaccinoC = 1;
                }
                if (vaccinazioni[i].vaccino == 'E')
                {
                    check[j].vaccinoE = 1;
                }
                {
                }
                break;
            }
        }
        if (j == dl)
        {
            check[j].chip = vaccinazioni[i].chip;
            dl++;

            if (vaccinazioni[i].vaccino == 'P')
            {
                check[j].vaccinoP = 1;
                check[j].vaccinoE = 0;
                check[j].vaccinoC = 0;
            }
            if (vaccinazioni[i].vaccino == 'C')
            {
                check[j].vaccinoP = 0;
                check[j].vaccinoE = 0;
                check[j].vaccinoC = 1;
            }
            if (vaccinazioni[i].vaccino == 'E')
            {
                check[j].vaccinoP = 0;
                check[j].vaccinoE = 1;
                check[j].vaccinoC = 0;
            }
            {
            }
        }
    }
    for (int i = 0; i < dl; i++)
    {
        printf("%d:", check[i].chip);

        if (check[i].vaccinoC == 0)
            printf(" cimurro");
        if (check[i].vaccinoE == 0)
            printf(" epatite");

        if (check[i].vaccinoP == 0)
            printf(" parvoirosi");
        printf("\n");
    }

    scriviUltimi(check, dl);
}
