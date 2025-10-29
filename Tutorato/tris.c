#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, f;
etichetta:
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

    if ((a == c && c == e) || (b == d && d == f))
        printf("tris\n");
    else if (((a + 1 == c && c + 1 == e) || (a - 1 == c && c - 1 == e)) || ((b + 1 == d && d + 1 == f) || (b - 1 == d && d - 1 == f)))
        printf("tris\n");
    else
        printf("perso\n");
}