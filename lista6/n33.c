#include <stdio.h>
main(){
    int a1,b,a2;
    float vol,area;
    printf("Valor da base(m)? ");
    scanf("%d",&b);
    printf("Valor da altura da base(m)? ");
    scanf("%d",&a1);
    area=(b*a1)/2;
    printf("Valor da altura da piramide(m)? ");
    scanf("%d",&a2);
    vol=area*a2;
    vol/=3;
    printf("\nA area/tamanho/volume da piramide eh %.2fm",vol);

}
