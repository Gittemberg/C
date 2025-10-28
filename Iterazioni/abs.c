#include <stdio.h>
#include <math.h>

int main()
{

    //  if(0.1+0.1+0.1 ==0.3) è incorretto

    if (fabs(0.1 + 0.1 + 0.1 - 0.3) < 1e-15)
        printf("uguali");
    else
        printf("diversi");
}