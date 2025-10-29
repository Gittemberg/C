#include <stdio.h>
#include <math.h>
float area(int r)
{
    float p = 3.14;
    return r * r * p;
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%.2f\n", area(a));
}