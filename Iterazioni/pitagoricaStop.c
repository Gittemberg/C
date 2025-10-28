#include <stdio.h>

int main()
{
    int c;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            c = i * j;

            printf("%d ", c);
        }
        if (c > 50)
            break;
        printf("\n");
    }
}