#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 30

int main()
{
    srand(time(NULL));
    int i;
    for (i = 0; i < DIM; i++)
    {
        printf("%d\n", rand() % 100);
    }
    printf("-1\n");
}