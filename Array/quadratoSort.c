#include <stdio.h>
#define DIM 5

int main()
{
    int i = 1, a, b, j, dl, m;
    int array[DIM];
    m = array[0];
    scanf("%d", &b);
    array[0] = b;
    while (i < DIM && b != 0)
    {
        scanf("%d", &b);
        array[i] = b * b;
        i++;
        }

    for (dl = 0; dl < i; dl++)
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

    for (j = 0; j < i; j++)
    {
        printf("%d ", array[j]);
    }
}