#include <stdio.h>

int primo(int c)
{
    int m = 0;
    for (int i = 1; i <= c; i++)
    {
        if (c % i == 0)
        {
            m++;
        }
    }
    return m;
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (primo(i) == 2)
            printf("%d\n", i);
    }
}