#include <stdio.h>

int main()
{
    int m, n, z = 0;

    scanf("%d", &n);
    m = n;

    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &n);
        if (n > m)
            m = n;
    }
    printf("%d\n", m);
}