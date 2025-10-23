#include <stdio.h>

int main()
{
    int m, n, i = 1, z = 0;

    scanf("%d%d", &n, &m);
    z = n;
    while (z >= m)
    {
        i++;
        z = z - m;
    }
    printf("%d\n", i - 1);
}