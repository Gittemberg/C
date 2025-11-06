#include <stdio.h>
#define DIM 5

int main()
{
    int i, a, j, dl, m;
    int array[DIM];

    for (dl = 0; dl < DIM; dl++)
    {

        j = dl;
        scanf("%d", &m);

        while (j > 0 && m < array[j - 1])

        {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = m;
    }

    for (i = 0; i < DIM; i++)
    {
        printf("%d ", array[i]);
    }
}