#include <stdio.h>
#define DIM 10

void input_array(int a[], int dl)
{

    int i;
    for (i = 0; i < dl; i++)
    {
        scanf("%d", &a[i]);
    }
}
int indice_massimo(int v[], int dl)
{
    int i;
    int m = 0;
    for (i = 0; i < dl; i++)
    {
        if (v[i] > v[m])
            m = i;
    }
    return m;
}

int main()
{
    int a[DIM];
    int n; // dimensione logica
    printf("quanti elementi?\n");
    scanf("%d", &n);
    input_array(a, n);
    printf("indice massimo: %d\n", indice_massimo(a, n));
}