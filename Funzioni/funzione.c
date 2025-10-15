#include <stdio.h>

void funzione(int c)
{
    printf("%d\n", c);
}

int funzione2(int d, int e)
{

    return d * e;
}

int main()
{
    int a;
    scanf("%d", &a);
    funzione(funzione2(a, 3));
}
