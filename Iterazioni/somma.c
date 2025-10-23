#include <stdio.h>

int main()
{
    int n, z = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        z = z + i;
    }
    printf("%d\n", z);
}