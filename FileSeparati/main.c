#include <stdio.h>
#include "headerFigura.h"

int main()
{
    Figura f;
    f = quadrato(2.5);

    printf("%f\n", area(f));
    printf("%f\n", perimetro(f));

    f = rettangolo(3.4, 4.2);
}