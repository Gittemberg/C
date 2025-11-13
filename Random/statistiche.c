#include <stdio.h>
#define DIM 100

int leggi_valori(int a[])
{
    int i = 0;

    do
    {
        scanf("%d", &a[i]);
        if (a[i] < 0)
            break;
        i++;
    }

    while (a[i - 1] >= 0);
    return i;
}

int minimo(int a[], int dl)
{
    int i;
    int min = 0;
    for (i = 1; i < dl; i++)
    {
        if (a[i] < a[min])
        {
            min = i;
        }
    }
    return a[min];
}
int massimo(int a[], int dl)
{
    int i;
    int min = 0;
    for (i = 1; i < dl; i++)
    {
        if (a[i] > a[min])
        {
            min = i;
        }
    }
    return a[min];
}
double media(int a[], int dl)
{
    int i;
    double s = 0.0;
    for (i = 0; i < dl; i++)
    {
        s += a[i];
    }
    return (s / dl);
}

void moda(int a[], int dl)
{
    int frequenza_massima;
    int numeri[DIM];
    int frequenze[DIM];
    int j, i, dlnf = 0;

    for (i = 0; i < dl; i++)
    {

        for (j = 0; j < dlnf; j++)
        {
            if (a[i] == numeri[j])
            {
                frequenze[j]++;
                break;
            }
            if (j == dlnf)
            {
                numeri[dlnf] = a[i];
                frequenze[dlnf] = 1;
                dlnf++;
            }
        }
    }
    frequenza_massima = massimo(frequenze, dlnf);

    for (j = 0; j < dlnf; j++)
    {
        if (frequenze[j] == frequenza_massima)

        {
            printf("%d", numeri[j]);
        }
    }
}
int main()
{

    int a[DIM];
    int i, dl;
    dl = leggi_valori(a);
    int b[dl];
    /* for (i = 0; i < DIM; i++)
      {
          printf("%d\n", a[i]);
      }*/
    printf("Minimo: %d\n", minimo(a, dl));
    printf("Massimo: %d\n", massimo(a, dl));
    printf("Media: %f\n", media(a, dl));
    //  printf("Moda: %f\n", moda(a, dl));

    moda(a, dl);
}