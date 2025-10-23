#include <stdio.h>

int primo(int c)
{
    for (int i = 2; i < c; i++)
    {
        if (c % i == 0)
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

    if (primo(n))
        printf("primo\n");
    else
        printf("non primo\n");
}