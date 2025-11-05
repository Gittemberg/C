#include <stdio.h>
#define DIM 5
// chiede a all utente e stampa il numero consecutivo  ogni volta per 5 volte
int main()
{
    int i, a;
    int array[DIM];
    scanf("%d", &a);
    for (i = 0; i < DIM; i++)
    {
        array[i] = a + i + 1;
        printf("%d\n", array[i]);
    }
}