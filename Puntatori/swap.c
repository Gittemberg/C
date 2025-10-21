#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()

{
    int a = 2, b = 3;
    swap(&a, &b);

    printf("%d %d\n", a, b);
}
