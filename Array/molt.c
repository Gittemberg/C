#include <stdio.h>
#define DIM 5

int main()
{
    int i, a, m = 1;
    int array[DIM];

    for (i = 0; i < DIM; i++)
    {
        scanf("%d", &a);
        array[i] = a;
        m = m * array[i];
        printf(" %d ", array[i]);
        if (i < DIM - 1)
            printf(" x");
    }
    printf(" = %d ", m);
}