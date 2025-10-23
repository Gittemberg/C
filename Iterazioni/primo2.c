#include <stdio.h>

int primo(int c)
{
    int m = 0;
    for (int i = 2; i <= c; i++)
    {

        if (m > 0)
        {
            return 0;
        }
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

    if (primo(n) == 1)
        printf("primo\n");
    else
        printf("non primo\n");
}