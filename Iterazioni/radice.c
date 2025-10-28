#include <stdio.h>
#include <math.h>

float valore_assoluto(float a)
{

    if (a >= 0.0f)
        return a;
    else
        return -a;
}

float media(float a, float b)
{
    return (a + b) / 2.0;
}

void radq(float a, float *px)
{
    float x = 1.0f;
    while (valore_assoluto((x * x) - a) / a > 1e-5)
    {
        x = media(x, a / x);
    }
    *px = x;
}
int main()
{
    float x;
    float a;
    scanf("%f", &a);
    radq(a, &x);
    printf("la radice è %f\n", x);
}