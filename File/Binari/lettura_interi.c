#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    int n, m;
    if ((pf = fopen("interi.dat", "rb")) == NULL)
    {
        printf("Errore apertura\n");
        exit(1);
    } /*
     fread(&n, sizeof(int), 1, pf);
     fread(&m, sizeof(int), 1, pf); // passa al successivo perchè la lettura è sequenziale
                                    // while(1) potrei usare un ciclo per leggerli tutti
                                    */
    while (fread(&n, sizeof(int), 1, pf) == 1)
    {

        printf("%d\n", n);
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura\n");
        exit(2);
    }
}