#include <stdio.h>

int main()
{
    int m, n, z = 0;

    scanf("%d%d", &n, &m);

    for (int i = 0; i < m; i++)
    {

        z += n;
    }
    printf("%d\n", z);
}