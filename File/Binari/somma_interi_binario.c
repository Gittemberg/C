#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    int n, somma;
    somma = 0;
    if ((pf = fopen("interi.dat", "rb")) == NULL)
    {
        printf("Errore apertura\n");
        exit(1);
    }
    while (fread(&n, sizeof(int), 1, pf) == 1)
    {

        somma = somma + n;
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }

    printf("la somma è: %d\n", somma);
}