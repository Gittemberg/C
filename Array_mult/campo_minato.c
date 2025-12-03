#define NRIGHE 6
#define NCOLONNE 10

#include <stdio.h>
#include <stdlib.h>

float rnd_flt(float min, float max)
{
    return min + (float)rand() / RAND_MAX * (max - min);
}

void inizializza(char c[NRIGHE][NCOLONNE], float probmina)
{

    int i, j;
    for (i = 0; i < NRIGHE - 1; i++)
    {
        for (j = 0; j < NCOLONNE - 1; j++)
        {
            if (rnd_flt(0.0, 1) <= probmina)
                c[i][j] = '*';
            else
                c[i][j] = ' ';
        }
    }
}
void stampa(char c[NRIGHE][NCOLONNE])
{
    int i, j;
    for (i = 0; i < NRIGHE - 1; i++)
    {
        for (j = 0; j < NCOLONNE - 1; j++)
        {
            printf("%c", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    char campo[NRIGHE][NCOLONNE];
    inizializza(campo, 0.2);
    stampa(campo);
}
