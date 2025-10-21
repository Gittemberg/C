#include <stdio.h>

void azzera(int *a)
{
    *a = 0;
}

int main()
{
    int a = 2;
    azzera(&a);
    printf("%d\n", a);
}
