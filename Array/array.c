#include <stdio.h>
#define DIM 3
int main()
{
    int i;
    int array[DIM] = {1, 2, 3};

    for (i = 0; i < DIM; i++)
        printf("%d\n", array[i]);
}