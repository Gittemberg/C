#include <stdio.h>

int main()
{
    int nGiorni;
    scanf("%d", &nGiorni);

    switch (nGiorni % 7)
    {
    case 0:
        printf("lunedi\n");
        break;
    case 1:
        printf("martedi\n");
        break;
    case 2:
        printf("mercoledi\n");
        break;
    case 3:
        printf("giovedi\n");
        break;

    case 4:
        printf("venerdi\n");
        break;
    case 5:
        printf("sabato\n");
        break;
    default:
        printf("domenica\n");
        break;
    }
}