#include <stdio.h>
#define DIM 80
int main()
{

    char s1[DIM], s2[DIM];
    int i = 0;
    printf("inserisci la prima stringa \n");
    scanf("%s", s1);
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    printf("%s\n", s2);
}