#include <stdio.h>

int primo(int c)
{
    for (int i = 1; i < c; i++)
    {
        if (c % i == 0 && i != 1)
        {
            return 0;
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        int z = primo(i);
        if (z)
            printf("%d\n", z);
    }
}