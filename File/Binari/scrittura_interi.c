#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    int i = 12;
    int a[10] = {3, 4, 5, 6, 7, 8, 3, 2, -1, -3};
    if ((pf = fopen("interi.dat", "wb")) == NULL)
    {
        printf("Errore apertura\n");
        exit(1);
    }
    // fwrite(&i, sizeof(i), 1, pf);
    fwrite(a, sizeof(int), 10, pf);
    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }
}