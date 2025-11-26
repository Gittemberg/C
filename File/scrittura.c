#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    char s[] = "Milano";
    pf = fopen("scritto.txt", "wt");
    if (pf == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    fprintf(pf, "%s", s);

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }
}