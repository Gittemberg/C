#include <stdio.h>

int f(int n)
{
    if (n > 1)
        return f(n / 5);

    else
        return 0;
}

int main(void)
{
    int m;
    scanf("%d", &m);
    m = f(m);
    return m;
}