#include <stdio.h>

int main(){
    printf("inserisci tre numeri per la somma:\n");
    int a,b;
    scanf("%d%d",&a,&b);
    b += a;        
    scanf("%d",&a);
    printf("la somma è: %d\n", a+b);
}