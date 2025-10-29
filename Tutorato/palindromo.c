#include <stdio.h>
#include <math.h>

int main()
{
    int a, i = 1, acc = 1;
    scanf("%d", &a);

    int r = 10;
    while (a % r != a)
    {
        i++;
        r = r * 10;
    }
    if (i % 2)
    {
        if (abs(a % (pow(10, i / 2)) - (a / (r / 10 * i / 2))))
            printf("palindromo\n");
    }
}