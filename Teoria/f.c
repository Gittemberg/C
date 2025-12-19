#include <stdio.h>

int f(int d)
{
    int m = 216365;
    int i, j;
    int n = m;
    for (i = 0; n > 0; i++)
    {
        n = n / 10;
    }
    if (d >= 0 && d <= i)
    {
        for (j = 0; j < (i - d); j++)
        {

            m = m / 10;
        }
        return m % 10;
    }
    else
        return 0;
}
int main()
{

    printf("%d\n", f(4));
}