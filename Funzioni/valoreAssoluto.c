#include <stdio.h>

int valoreAssoluto(int n)
{
    if (n >= 0)
        return n;
    else
        return -n;
}
int main()
{
    int x;
    printf("inserisci il numero\n");
    scanf("%d", &x);
    printf("il  valore assoluto è: %d\n", valoreAssoluto(x));
    return 0;
}