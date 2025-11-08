#include <stdio.h>
#define DIM 5

int main()
{
    int i, a, j, dl, m;
    int array[DIM] = {3, 1, 7, 4, 0};
    m = array[0];
    for (dl = 0; dl < DIM; dl++)
    {

        j = dl;
        m = array[dl];
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