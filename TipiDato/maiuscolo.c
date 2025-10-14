#include <stdio.h>

int main()
{
    char a;

    scanf("%c", &a);

    if (a >= 65 && a <= 90) // a>= 'A' && a<= 'Z'
        printf("Maiuscola\n");

    else if (a >= 97 && a <= 122)
        printf("Minuscola\n");
    else if (a >= 48 && a <= 57) // I valori delle cifra da 0 a 9 in ascii, mettendo 0 e 9 verrebbe confrontato il corrispettivo della cifra in ascii che non è più il valore che vogliamo confrontare
        printf("Cifra\n");
    else
        printf("Altro\n");
}