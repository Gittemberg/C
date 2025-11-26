#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    char s1[80];
    char s2[80];
    int d;
    pf = fopen("doc.txt", "rt");
    if (pf == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }
    fscanf(pf, "%s", s1);
    fscanf(pf, "%s", s1);
    fscanf(pf, "%d", &d);

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }
}