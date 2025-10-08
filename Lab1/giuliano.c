#include <stdio.h>

int main(){
    int g,m,a,jd,n,n1,n2,n3;
    printf("Inserisci la data da calcolare:\n");
    scanf("%d%d%d", &g,&m,&a);
    n = (m-14)/12;
    n1 = (1461*(a+4800+n)) /4;
	n2 = (367* ( m-2-(12*n)))/12;
	n3 = (3*(a+4900+n))/400;
	jd = n1+n2-n3+g-32075;
	printf("Il giorno Giuliano è: %d\n", jd);

}