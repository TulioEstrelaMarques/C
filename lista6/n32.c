#include <stdio.h>
main(){
    int d,r,rq,pir,a,pira;
    printf("Insira o diametro(m): ");
    scanf("%d",&d);
    r=d/2;
    rq=r*r;
    pir=rq*3.14;
    printf("Insira a altura(m): ");
    scanf("%d",&a);
    pira=pir*a;
    printf("O volume eh %dm",pira);
}
