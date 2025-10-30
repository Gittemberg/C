#include <stdio.h>
#include <math.h>

void radiceN(float a, int n, float *pr)
{

    float x = 1.0f;
    float p;
    do
    {
        p = 1.0f;
        int i = 0;
        while (i < n - 1)
        {
            p = p * x;
            i++;
        }
        x = ((n - 1) * (p * x) + a) / (n * p);
    } while (fabs(((p * x) - a) / a) > 1e-5);
    *pr = x;
}

int main()
{
    // printf("%f", radiceN(2, 2));
    int M;
    float y, x;
    scanf("%f%d", &y, &M);
    int i;
    for (i = 2; i <= M; i++)

    {
        radiceN(y, i, &x);
        printf("%f\n", x);
    }
    return 0;
}