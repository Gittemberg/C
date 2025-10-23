#include <stdio.h>

int valore_input()
{
    int n;
    scanf("%d", &n);
    return n;
}

int main()
{
    int z = 0;

    for (int i = 0; i < 5; i++)
    {
        // map
        z += valore_input(); // filter
    }
    printf("%d\n", z);
}