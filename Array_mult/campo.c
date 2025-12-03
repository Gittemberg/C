#include "campo.h"
#include <stdlib.h>
#include <stdio.h>

float rnd_flt(float min, float max)
{
    return min + (float)rand() / RAND_MAX * (max - min);
}

void inizializza(Campo *pcampo, float probmina)
{
    int i, j;
    for (i = 0; i < NRIGHE - 1; i++)
    {
        for (j = 0; j < NCOLONNE - 1; j++)
        {
            pcampo->celle[i][j].coperta = 1;
            pcampo->celle[i][j].mina = rnd_flt(0.0, 1) <= probmina;
        }
    }
}

int mine_adiacenti(Campo campo, int r, int c)
{
    // restituisce numero mine adiacenti alla cella <r,c>
    int contatore = 0;
    if (r - 1 >= 0 && c - 1 >= 0 && campo.celle[r - 1][c - 1].mina == '*')
        contatore++;
    if (r - 1 >= 0 && campo.celle[r - 1][c].mina == '*')
        contatore++;
    if (r - 1 >= 0 && c + 1 < NCOLONNE && campo.celle[r - 1][c + 1].mina == '*')
        contatore++;
    if (c - 1 >= 0 && campo.celle[r][c - 1].mina == '*')
        contatore++;
    if (c + 1 < NCOLONNE && campo.celle[r][c + 1].mina == '*')
        contatore++;
    if (r + 1 < NRIGHE && c - 1 >= 0 && campo.celle[r + 1][c - 1].mina == '*')
        contatore++;
    if (r + 1 < NRIGHE < 0 && campo.celle[r + 1][c].mina == '*')
        contatore++;
    if (r + 1 < NRIGHE && c + 1 < NCOLONNE && campo.celle[r + 1][c + 1].mina == '*')
        contatore++;
    return contatore;
}
void stampa(Campo c)
{
    int i, j;
    for (i = 0; i < NRIGHE - 1; i++)
    {
        for (j = 0; j < NCOLONNE - 1; j++)
        {

            if (
                c.celle[i][j].mina == 1)
                printf("*");
            else
            {
                int contatore = mine_adiacenti(c, i, j);
                if (contatore > 0)
                    printf("%d", contatore);
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}