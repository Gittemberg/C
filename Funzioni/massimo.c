#include <stdio.h>

int massimo(int n, int n2)
{
    if (n >= n2)
        return n;
    else
        return n2;
}

int massimo3(int n, int n2, int n3)
{
    return massimo(massimo(n, n2), n3);
}

int massimo4(int n, int n2, int n3, int n4)
{
    return massimo(massimo(n, n2), massimo(n3, n4));
}
int main()
{
    int x, x2, x3;
    printf("inserisci i numeri\n");
    scanf("%d%d%d", &x, &x2, &x3);
    printf("il massimo è: %d\n", massimo3(x, x2, x3));
    return 0;
}