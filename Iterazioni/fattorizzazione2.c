#include <stdio.h>
int primo(int a)
{
    int i;
    if (a < 2)
        return 0;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {

            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    int i;
    int q;
    int esponente;

    scanf("%d", &a);
    q = a;
    for (i = 1; i <= a; i++)
    {

        if (a % i == 0)
        {
            if (primo(i))
            {

                printf("%d", i);
                esponente = 0;

                {
                    while (q % i == 0)
                    {
                        esponente++;
                        q = q / i;
                    }
                    if (esponente > 1)
                        printf("^%d", esponente);

                    if (q > 1)
                        printf(" x ");
                }
            }
        }
    }
    printf("\n");
}