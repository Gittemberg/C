#include <stdio.h>

int main()
{
    int n, z = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0) // filter
            z = z + i;  // reduce
    }
    printf("%d\n", z);
}