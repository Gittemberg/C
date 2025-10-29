#include <stdio.h>
#include <math.h>

int divisibile(int a, int b)
{
    return a % b == 0;
}

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);

    if (b)
    {
        if (!divisibile(a, b))

        {
            printf("la divisione fa: %d con resto: %d\n", a / b, a % b);
        }
        else
            printf("la divisione fa: %d \n", a / b);
    }
    else
        printf("non si può dividere per zero\n");
}