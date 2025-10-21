#include <stdio.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
void ordina(int *a, int *b)
{
    if (*b < *a)
        swap(a, b);
}
int main()

{
    int a = 3, b = 2;
    ordina(&a, &b);

    printf("%d %d\n", a, b);
}
